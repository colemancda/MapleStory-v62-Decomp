/* FUN_00427905 - 0x00427905 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00427905(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008e8a24;
  *(undefined4 *)(unaff_EBP + -4) = 0x13;
  FUN_004027eb();
  FUN_004027eb();
  FUN_004027eb();
  FUN_004027eb();
  FUN_004027eb();
  piVar1 = (int *)extraout_ECX[0x59];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x58];
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x57];
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  extraout_ECX[0x52] = &PTR_FUN_008e8a70;
  FUN_00437198();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  extraout_ECX[0x4d] = &PTR_FUN_008e8a6c;
  FUN_0043700e();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  extraout_ECX[0x48] = &PTR_FUN_008e8a68;
  FUN_00436e84();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  extraout_ECX[0x43] = &PTR_FUN_008e8a64;
  FUN_00436cfa();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  extraout_ECX[0x3e] = &PTR_FUN_008e8a2c;
  FUN_00436b70();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  extraout_ECX[0x39] = &PTR_FUN_008e8a30;
  FUN_004369e6();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  extraout_ECX[0x34] = &PTR_FUN_008e8a34;
  FUN_0043685c();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  extraout_ECX[0x2f] = &PTR_FUN_008e8a38;
  FUN_004366d2();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  extraout_ECX[0x2a] = &PTR_FUN_008e8a3c;
  FUN_00436548();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  extraout_ECX[0x25] = &PTR_FUN_008e8a40;
  FUN_004363be();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  extraout_ECX[0x20] = &PTR_FUN_008e8a44;
  FUN_00436234();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  extraout_ECX[0x1b] = &PTR_FUN_008e8a48;
  FUN_004360aa();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  extraout_ECX[0x16] = &PTR_FUN_008e8a4c;
  FUN_00435f20();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0x11] = &PTR_FUN_008e8a50;
  FUN_00435d96();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0xc] = &PTR_FUN_008e8a54;
  FUN_00435c0c();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[7] = &PTR_FUN_008e8a58;
  FUN_00435a82();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = &PTR_FUN_008e8a5c;
  FUN_004358bd();
  DAT_0097810c = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


