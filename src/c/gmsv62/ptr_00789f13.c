/* ptr_00789f13 - 0x00789f13 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00789f13(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  undefined1 auStack_c [4];
  
  FUN_008140e5();
  unaff_ESI[0x1a] = unaff_EDI;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0074b9b2();
  unaff_ESI[0x15d] = unaff_EDI;
  *(undefined1 **)(unaff_EBP + -0x14) = auStack_c;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *unaff_ESI = &PTR_FUN_008f17a8;
  unaff_ESI[1] = &PTR_FUN_008f175c;
  unaff_ESI[2] = &PTR_FUN_008f1758;
  FUN_004059fd(unaff_EBP + 0x10);
  FUN_008163ca();
  unaff_ESI[0x155] = *(undefined4 *)(unaff_EBP + 8);
  unaff_ESI[0x156] = *(undefined4 *)(unaff_EBP + 0xc);
  if (unaff_ESI[0x18] == unaff_EDI) {
    FUN_00878dfb();
  }
  iVar2 = FUN_0040e48b();
  iVar1 = *(int *)(unaff_EBP + 0x10);
  unaff_ESI[0x157] = iVar2 + -0x14;
  unaff_ESI[0x158] = 8;
  unaff_ESI[0x159] = unaff_EDI;
  if (iVar1 != unaff_EDI) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


