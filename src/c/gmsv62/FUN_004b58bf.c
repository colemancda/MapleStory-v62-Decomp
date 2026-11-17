/* FUN_004b58bf - 0x004b58bf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004b58bf(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 == 1) {
    puVar1 = (undefined4 *)FUN_004029b9(0xc9);
    *(undefined4 **)(unaff_EBP + 0xc) = puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (puVar1 == (undefined4 *)0x0) {
LAB_004b596a:
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_004ba99b();
      *puVar1 = &PTR_FUN_008e9fcc;
    }
  }
  else if (iVar2 == 2) {
    puVar1 = (undefined4 *)FUN_004029b9(0x4d);
    *(undefined4 **)(unaff_EBP + 0xc) = puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (puVar1 == (undefined4 *)0x0) goto LAB_004b596a;
    FUN_004ba99b();
    *puVar1 = &PTR_FUN_008ea014;
  }
  else {
    if (iVar2 != 3) {
      iVar2 = *(int *)(unaff_EBP + 8);
      *(undefined4 *)(iVar2 + 4) = 0;
      goto LAB_004b5982;
    }
    puVar1 = (undefined4 *)FUN_004029b9(0x61);
    *(undefined4 **)(unaff_EBP + 0xc) = puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    if (puVar1 == (undefined4 *)0x0) goto LAB_004b596a;
    FUN_004ba99b();
    *puVar1 = &PTR_FUN_008ea05c;
  }
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 **)(iVar2 + 4) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar1 + 1);
  }
LAB_004b5982:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


