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

    /* ---- OUTPUT ---- */
    printf("\nQTY  DESCRIPTION        UNIT PRICE   TOTAL PRICE\n");
    printf("----------------------------------------------------------\n");

    printf("%2d   TV                 %.2f        %.2f\n", tvQty, TV_PRICE, tvTotal);
    printf("%2d   Monitor            %.2f        %.2f\n", monitorQty, MONITOR_PRICE, monitorTotal);
    printf("%2d   Flash Drive        %.2f        %.2f\n", flashQty, FLASH_PRICE, flashTotal);
    printf("%2d   Hard Drive         %.2f        %.2f\n", hardQty, HARD_PRICE, hardTotal);
    printf("%2d   DeskJet Printer    %.2f        %.2f\n", printerQty, PRINTER_PRICE, printerTotal);

    printf("----------------------------------------------------------\n");
    printf("Subtotal: %.2f\n", subtotal);
    printf("Tax (8.35%%): %.2f\n", tax);
    printf("Total: %.2f\n", total);
return 0;
}
