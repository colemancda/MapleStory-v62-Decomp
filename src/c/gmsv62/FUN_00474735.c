/* FUN_00474735 - 0x00474735 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00474735(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x18);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  if (iVar2 != 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x14,&DAT_008f9b80);
  }
  FUN_00474666(*(undefined4 *)(extraout_ECX + 0x10),*(undefined4 *)(unaff_EBP + 8),
               *(undefined4 *)(unaff_EBP + 0xc),0);
  iVar2 = (*DAT_0097b464)(*(undefined4 *)(extraout_ECX + 0x10));
  if (iVar2 == 0) {
    uVar3 = (*DAT_0097b49c)();
    uVar1 = *(undefined4 *)(extraout_ECX + 0xc);
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
    uVar3 = *(undefined4 *)(extraout_ECX + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00474666(*(undefined4 *)(extraout_ECX + 0x10),uVar3,uVar1,0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 0xc);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x18,&DAT_008f9b80);
  }
  FUN_00474666(*(undefined4 *)(extraout_ECX + 0x10),*(undefined4 *)(extraout_ECX + 8),
               *(undefined4 *)(extraout_ECX + 0xc),0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


