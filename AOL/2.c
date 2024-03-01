#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 1000

//struct data
typedef struct House_Struct {
    char location[100];
    char city[100];
    int price;
    char room[100];
    char bathroom[100];
    char carpark[100];
    char type[100];
    char furnish[100];
} House;

void swap(House *a, House *b) {
    House temp = *a;
    *a = *b;
    *b = temp;
}

// Comparison functions
int compareLocation(const House *a, const House *b) {
    return strcmp(a->location, b->location);
}

int compareCity(const House *a, const House *b) {
    return strcmp(a->city, b->city);
}

int comparePrice(const House *a, const House *b) {
    return a->price - b->price;
}

int compareRoom(const House *a, const House *b) {
    return strcmp(a->room, b->room);
}

int compareBathroom(const House *a, const House *b) {
    return strcmp(a->bathroom, b->bathroom);
}

int compareCarpark(const House *a, const House *b) {
    return strcmp(a->carpark, b->carpark);
}

int compareType(const House *a, const House *b) {
    return strcmp(a->type, b->type);
}

int compareFurnish(const House *a, const House *b) {
    return strcmp(a->furnish, b->furnish);
}

//quick sort biasa
int partition(House arr[], int low, int high, int (*compare)(const House*, const House*)) {
    int pivot_random = low + (rand() % (high - low));
    swap(&arr[pivot_random], &arr[high]);

    House pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (compare(&arr[j], &pivot) <= 0) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void qsortrecursion(House arr[], int low, int high, int (*compare)(const House*, const House*)) {
    srand(time(NULL));
    if (low < high) {
        int pivot_index = partition(arr, low, high, compare);
        qsortrecursion(arr, low, pivot_index - 1, compare);
        qsortrecursion(arr, pivot_index + 1, high, compare);
    }
}

void quicksort(House arr[], int length, int (*compare)(const House*, const House*)) {
    qsortrecursion(arr, 0, length - 1, compare);
}

int compare1Location(const House *a, const char *key) {
    return strcmp(a->location, key);
}

int compare1City(const House *a, const char *key) {
    return strcmp(a->city, key);
}

int compare1Price(const House *a, const void *key) {
    int intKey = *((int*)key);
    return a->price - intKey;
}


int compare1Room(const House *a, const char *key) {
    return strcmp(a->room, key);
}

int compare1Bathroom(const House *a, const char *key) {
    return strcmp(a->bathroom, key);
}

int compare1Carpark(const House *a, const char *key) {
    return strcmp(a->carpark, key);
}

int compare1Type(const House *a, const char *key) {
    return strcmp(a->type, key);
}

int compare1Furnish(const House *a, const char *key) {
    return strcmp(a->furnish, key);
}

//untuk Sort sekaligus Search berbasis string
void processColumn(const char *column, const House houses[], int n, const char *keyword, int (*compare)(const void *, const void *), int (*compare1)(const void *, const void *), int status) {
    quicksort(houses, n, compare);
    int found = 0;
    if (status == 0) {
        return;
    }
    printf("||%26s||%20s||%15s||%15s||%20s||%10s||%20s||%20s||\n",
               "Location", "City", "Price", "Room", "Bathroom", "Carpark", "Type", "Furnish");
    for (int i = 0; i < n; i++) {
        if (compare1(&houses[i], keyword) == 0) {
            found = 1;
            printf("||%26s||%20s||%15d||%15s||%20s||%10s||%20s||%20s||\n",
       houses[i].location, houses[i].city, houses[i].price, houses[i].room, houses[i].bathroom, houses[i].carpark, houses[i].type, houses[i].furnish);
        }
    }

    if (!found) {
        printf("Data not found\n");
    }
}

//untuk Sort sekaligus Search berbasis integer
void processColumn2(const char *column, const House houses[], int n, int *keyword, int (*compare)(const void *, const void *), int (*compare1)(const void *, const void *), int status) {
    quicksort(houses, n, compare);
    int found = 0;
    if (status == 0) {
        return;
    }
    printf("||%26s||%20s||%15s||%15s||%20s||%10s||%20s||%20s||\n",
           "Location", "City", "Price", "Room", "Bathroom", "Carpark", "Type", "Furnish");
    for (int i = 0; i < n; i++) {
        if (compare1(&houses[i], keyword) == 0) { 
            found = 1;
            printf("||%26s||%20s||%15d||%15s||%20s||%10s||%20s||%20s||\n",
               houses[i].location, houses[i].city, houses[i].price, houses[i].room, houses[i].bathroom, houses[i].carpark, houses[i].type, houses[i].furnish);
        }
    }

    if (!found) {
        printf("Data not found\n");
    }
}

//untuk Type and Enter to Continue....
void click(){
    char ehe[100];
    printf("Type any Character and Enter to Continue....    ");
    scanf(" %[^\n]", ehe);
}

void menu(House houses[], int n){

    system("cls");
    printf("Data sum: %d\n", n+1);
    printf("What do you want to do?\n");
    printf("1. Display Data\n");
    printf("2. Search Data\n");
    printf("3. Sort Data\n");
    printf("4. Export Data\n");
    printf("5. Exit\n");

    int choice;
    printf(">> "); scanf(" %d", &choice); getchar();

    switch (choice)
    {
    case 1:{
        //display
        int rows1;
        printf("Number of rows: ");
        scanf(" %d", &rows1); getchar();
        printf("||%26s||%20s||%20s||%15s||%20s||%10s||%20s||%20s||\n",
               "Location", "City", "Price", "Room", "Bathroom", "Carpark", "Type", "Furnish");
        for (int i = 0; i < rows1; i++)
        {
            printf("||%26s||%20s||%20d||%15s||%20s||%10s||%20s||%20s||\n",
       houses[i].location, houses[i].city, houses[i].price, houses[i].room, houses[i].bathroom, houses[i].carpark, houses[i].type, houses[i].furnish);
        }
        click();
        menu(houses, n);
        break;
    }

    case 2:{
        //sort
        char column[100], keyword[100];
        printf("||%26s||%20s||%15s||%15s||%20s||%10s||%20s||%20s||\n",
           "Location", "City", "Price", "Room", "Bathroom", "Carpark", "Type", "Furnish");
        printf("Choose Column(Capital Letter): "); scanf(" %s", column);
        printf("Keyword: "); scanf(" %s", keyword);
        
        if (strcmp(column, "Location") == 0) {
            processColumn(column, houses, n, keyword, compareLocation, compare1Location,1);        
        } else if (strcmp(column, "City") == 0) {
            processColumn(column, houses, n, keyword, compareCity, compare1City,1);
        } else if (strcmp(column, "Price") == 0) {
            int ehe = atoi(keyword);
            processColumn2(column, houses, n, &ehe, comparePrice, compare1Price,1);
        } else if (strcmp(column, "Room") == 0) {
            processColumn(column, houses, n, keyword, compareRoom, compare1Room,1);
        } else if (strcmp(column, "Bathroom") == 0) {
            processColumn(column, houses, n, keyword, compareBathroom, compare1Bathroom,1);
        } else if (strcmp(column, "Carpark") == 0) {
            processColumn(column, houses, n, keyword, compareCarpark, compare1Carpark,1);
        } else if (strcmp(column, "Type") == 0) {
            processColumn(column, houses, n, keyword, compareType, compare1Type,1);
        } else if (strcmp(column, "Furnish") == 0) {
            processColumn(column, houses, n, keyword, compareFurnish, compare1Furnish,1);
        }
        click();
        menu(houses, n);
        break;
    }

    case 3:
    {
        //search
        char column[100], keyword[100];
        printf("||%26s||%20s||%15s||%15s||%20s||%10s||%20s||%20s||\n",
           "Location", "City", "Price", "Room", "Bathroom", "Carpark", "Type", "Furnish");
        printf("Choose Column(Capital Letter): "); scanf(" %s", column);
        printf("Ascending or Descending(Ascending/Descending): "); scanf(" %s", keyword);
        int Descending=0;
        
        if(strcmp(keyword, "Descending")){
            Descending = 1;
        }

        if (strcmp(column, "Location") == 0) {
            processColumn(column, houses, n, keyword, compareLocation, compare1Location,0);        
        } else if (strcmp(column, "City") == 0) {
            processColumn(column, houses, n, keyword, compareCity, compare1City,0);
        } else if (strcmp(column, "Price") == 0) {
            int ehe = atoi(keyword);
            processColumn2(column, houses, n, &ehe, comparePrice, compare1Price, 0);
        }
        else if (strcmp(column, "Room") == 0) {
            processColumn(column, houses, n, keyword, compareRoom, compare1Room,0);
        } else if (strcmp(column, "Bathroom") == 0) {
            processColumn(column, houses, n, keyword, compareBathroom, compare1Bathroom,0);
        } else if (strcmp(column, "Carpark") == 0) {
            processColumn(column, houses, n, keyword, compareCarpark, compare1Carpark,0);
        } else if (strcmp(column, "Type") == 0) {
            processColumn(column, houses, n, keyword, compareType, compare1Type,0);
        } else if (strcmp(column, "Furnish") == 0) {
            processColumn(column, houses, n, keyword, compareFurnish, compare1Furnish,0);
        }

        if(!Descending){
            printf("||%26s||%20s||%15s||%15s||%20s||%10s||%20s||%20s||\n",
               "Location", "City", "Price", "Room", "Bathroom", "Carpark", "Type", "Furnish");
            for (int i = n-1; i > n-11; i--)
            {
                printf("||%26s||%20s||%15d||%15s||%20s||%10s||%20s||%20s||\n",
       houses[i].location, houses[i].city, houses[i].price, houses[i].room, houses[i].bathroom, houses[i].carpark, houses[i].type, houses[i].furnish);
            }
            
        }
        else{
            printf("||%26s||%20s||%15s||%15s||%20s||%10s||%20s||%20s||\n",
               "Location", "City", "Price", "Room", "Bathroom", "Carpark", "Type", "Furnish");
            for(int i = 0; i < 11; i++)
            {
                printf("||%26s||%20s||%15d||%15s||%20s||%10s||%20s||%20s||\n",
       houses[i].location, houses[i].city, houses[i].price, houses[i].room, houses[i].bathroom, houses[i].carpark, houses[i].type, houses[i].furnish);
            }

        } 
        click();
        menu(houses, n);
        break;
    }
    
    case 4:
    {
        //export
        char filename[100];
        printf("File name: "); scanf(" %s", filename); getchar();
        strcat(filename, ".csv");
        FILE *newfile = fopen(filename, "w");
        for (int i = 0; i < n; i++)
        {
            fprintf(newfile, "%s,%s,%d,%s,%s,%s,%s,%s\n", houses[i].location, houses[i].city, houses[i].price, houses[i].room, houses[i].bathroom, houses[i].carpark, houses[i].type, houses[i].furnish);
        }
        fclose(newfile);
        printf("Data has been sucessfully written to file %s!\n", filename);
        click();
        menu(houses, n);
        break;
    }

    case 5:
    {
        //exit
        system("cls");
        printf("bang udah bang\n");
        sleep(1);
        system("cls");
        printf("Exitted...\n");
        click();
        return;
    }

    default:
        menu(houses, n);
        break;
    }
}



int main() {
    House houses[MAX];
    // printf("jalan\n");
    FILE *file = fopen("file.csv", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    int numberOfHouses = 0;  
    char blank[1000];
    fscanf(file, "%[^\n]", blank); fgetc(file);

    for (int i = 0; fscanf(file, "%[^,],%[^,],%d,%[^,],%[^,],%[^,],%[^,],%[^\n]\n", houses[i].location, houses[i].city, &houses[i].price, houses[i].room, houses[i].bathroom, houses[i].carpark, houses[i].type, houses[i].furnish) != EOF; i++) {
        // printf("jalan\n");
        numberOfHouses++;
        // printf("location: %s, city: %s, price: %s, room: %s, bathroom: %s, carpark: %s, type: %s, furnish: %s\n",houses[i].location, houses[i].city, houses[i].price, houses[i].room, houses[i].bathroom, houses[i].carpark, houses[i].type, houses[i].furnish);
    }
    menu(houses, numberOfHouses);
    fclose(file);
    return 0;
}
