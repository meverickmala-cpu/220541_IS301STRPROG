/*  Problem:  Creating a customer billing program that calculates total sales,
    tax (8.35%), and final amount for five computer products.
    Algorithm:
        1. Define product prices and tax rate.
        2. Ask user to enter quantity for each product.
        3. Calculate total price per product.
        4. Compute subtotal, tax, and final total.
        5. Display formatted bill.
    Developed and edited by: Vincent Mala
    Date: 03/03/2026

*/

#include <stdio.h>

int main(){

       /* ---- CONSTANTS ---- */
    const float TV_PRICE = 400.00;
    const float MONITOR_PRICE = 220.00;
    const float FLASH_PRICE = 35.20;
    const float HARD_PRICE = 150.00;
    const float PRINTER_PRICE = 300.00;
    const float TAX_RATE = 0.0835;

        /* ---- VARIABLES ---- */
    int tvQty, monitorQty, flashQty, hardQty, printerQty;
    float tvTotal, monitorTotal, flashTotal;
    float hardTotal, printerTotal;
    float subtotal, tax, total;

    /* ---- INPUT ---- */
    printf("How Many TVs Were Sold? ");
    scanf("%d", &tvQty);

    printf("How Many Monitors Were Sold? ");
    scanf("%d", &monitorQty);

    printf("How Many Flash Drives Were Sold? ");
    scanf("%d", &flashQty);

    printf("How Many Hard Drives Were Sold? ");
    scanf("%d", &hardQty);

    printf("How Many DeskJet Printers Were Sold? ");
    scanf("%d", &printerQty);

    /* ---- CALCULATIONS ---- */
    tvTotal = tvQty * TV_PRICE;
    monitorTotal = monitorQty * MONITOR_PRICE;
    flashTotal = flashQty * FLASH_PRICE;
    hardTotal = hardQty * HARD_PRICE;
    printerTotal = printerQty * PRINTER_PRICE;

    subtotal = tvTotal + monitorTotal + flashTotal +
               hardTotal + printerTotal;

    tax = subtotal * TAX_RATE;
    total = subtotal + tax;


    /* -------- OUTPUT -------- */

printf("\n");
printf("QTY   DESCRIPTION      UNIT PRICE      TOTAL PRICE\n");
printf("------------------------------------------------------------\n");

printf("%-5d %-16s %10.2f %15.2f\n", tvQty, "TV", 400.00, tvTotal);
printf("%-5d %-16s %10.2f %15.2f\n", monitorQty, "Monitor", 220.00, monitorTotal);
printf("%-5d %-16s %10.2f %15.2f\n", flashQty, "Flash Drive", 35.20, flashTotal);
printf("%-5d %-16s %10.2f %15.2f\n", hardQty, "Hard Drive", 150.00, hardTotal);
printf("%-5d %-16s %10.2f %15.2f\n", printerQty, "Deskjet Printer", 300.00, printerTotal);

printf("\n");
printf("                                   ----------------\n");

printf("%-35s %15.2f\n", "Subtotal:", subtotal);
printf("%-35s %15.2f\n", "Tax:", tax);
printf("%-35s %15.2f\n", "Total:", total);
printf("------------------------------------------------------------\n");
return 0;
}
