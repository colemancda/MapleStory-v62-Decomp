/* ptr_0052a8e8 - 0x0052a8e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0052a8e8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 unaff_EDI;
  
  FUN_0045e053(unaff_EBP + -0x18,4);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  FUN_00414edd(unaff_EDI);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puVar1 = (undefined4 *)FUN_0045e02d(unaff_EBP + -0x10);
  uVar2 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045efbb(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00434e38();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_00434e38();
  }
  uVar2 = FUN_0042459a();
  *(undefined4 *)(unaff_ESI + 0x1d4c) = uVar2;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(unaff_ESI + 0x1d50) = uVar2;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(unaff_ESI + 0x1d54) = uVar2;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(unaff_ESI + 0x1d58) = uVar2;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(unaff_ESI + 0x1d5c) = uVar2;
  (*DAT_0097b4a8)();
  SystemTimeToFileTime((SYSTEMTIME *)(unaff_EBP + -0x40),(LPFILETIME)(unaff_EBP + -0x20));
  FUN_004245d2(unaff_EBP + -0x28,8);
  puVar1 = (undefined4 *)
           FUN_0052b5b4(unaff_EBP + -0x30,*(undefined4 *)(unaff_EBP + -0x28),
                        *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                        *(undefined4 *)(unaff_EBP + -0x1c),1);
  *(undefined4 *)(unaff_ESI + 0x34) = *puVar1;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined4 *)(unaff_ESI + 0x38) = puVar1[1];
  return;
}


