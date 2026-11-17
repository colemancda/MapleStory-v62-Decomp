/* FUN_00776523 - 0x00776523 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00776523(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_58;
  int iStack_54;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x24);
  iVar2 = *(int *)(iVar1 + 0x818);
  if ((iVar2 != 0) && (iVar2 != *(int *)(DAT_00978368 + 0x2088))) {
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    iStack_54 = unaff_EBP + -0x54;
    uStack_58 = *(undefined4 *)(iVar1 + 0x818);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00776a20();
    if (DAT_00978360 != 0) {
      iStack_54 = 0;
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_58;
      FUN_00450368(unaff_EBP + -0x50);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00449784();
      FUN_00743a05();
      iStack_54 = 0;
      uStack_58 = 0x77659d;
      FUN_0073e65e();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_54 = 0x7765a9;
    FUN_00773f2e();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


