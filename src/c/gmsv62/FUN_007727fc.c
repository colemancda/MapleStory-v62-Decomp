/* FUN_007727fc - 0x007727fc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007727fc(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_54;
  int iStack_50;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x28);
  iVar2 = *(int *)(iVar1 + 0x818);
  if ((iVar2 != 0) && (iVar2 != *(int *)(DAT_00978368 + 0x2088))) {
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    iStack_50 = unaff_EBP + -0x50;
    uStack_54 = *(undefined4 *)(iVar1 + 0x818);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00772cd7();
    if (DAT_00978360 != 0) {
      iStack_50 = 0;
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_54;
      FUN_00450368(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00449784();
      FUN_00743a05();
      iStack_50 = 0;
      uStack_54 = 0x772876;
      FUN_0073e65e();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_50 = 0x772882;
    FUN_00770582();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


