/* FUN_0076f6fc - 0x0076f6fc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076f6fc(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_64;
  int iStack_60;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x24);
  iVar2 = *(int *)(iVar1 + 0x818);
  if ((iVar2 != 0) && (iVar2 != *(int *)(DAT_00978368 + 0x2088))) {
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    iStack_60 = unaff_EBP + -0x60;
    uStack_64 = *(undefined4 *)(iVar1 + 0x818);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0076fa45();
    if (DAT_00978360 != 0) {
      iStack_60 = 0;
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_64;
      FUN_00450368(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00449784();
      FUN_00743a05();
      iStack_60 = 0;
      uStack_64 = 0x76f773;
      FUN_0073e65e();
    }
    *(undefined4 *)(unaff_EBP + -4) = 2;
    iStack_60 = 0x76f782;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_60 = 0x76f78e;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


