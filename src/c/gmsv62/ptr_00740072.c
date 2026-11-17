/* ptr_00740072 - 0x00740072 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00740072(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  int unaff_EDI;
  
  FUN_004e2321();
  FUN_004e2217(unaff_EDI + 0x322c);
  FUN_004e2321();
  if (*(int *)(unaff_EBP + -0x34) != unaff_EBX) {
    FUN_008161f1();
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar1 == unaff_EBX) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_005adfe1();
    }
    uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
    *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar2 != 0) & uVar2 - 8;
    *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
    FUN_004e2260();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004bc6a2();
    *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
    FUN_004e227d();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x3c) = unaff_ESI;
  FUN_004e2321();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


