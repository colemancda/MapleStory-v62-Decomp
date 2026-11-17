/* FUN_0047c89d - 0x0047c89d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047c89d(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = FUN_0047ca3f(*(undefined4 *)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + -0x14) = 3;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar2 = (*DAT_0097b6b8)(uVar1,*(undefined4 *)(unaff_EBP + 0xc),0,unaff_EBP + -0x14,0,
                          unaff_EBP + -0x10);
  if (((iVar2 == 0) && (*(int *)(unaff_EBP + -0x14) == 3)) && (*(int *)(unaff_EBP + -0x10) != 0)) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00475c07(*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + 0xb);
    iVar2 = (*DAT_0097b6b8)(uVar1,*(undefined4 *)(unaff_EBP + 0xc),0,unaff_EBP + -0x14,
                            *(undefined4 *)(unaff_EBP + -0x18),unaff_EBP + -0x10);
    if (iVar2 != 0) {
      FUN_0045ebca();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


