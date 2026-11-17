/* FUN_008358eb - 0x008358eb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_008358eb(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (DAT_00979178 == 0) {
    iVar2 = FUN_00429303(extraout_ECX,extraout_ECX);
    if (iVar2 != 0) {
      iVar2 = FUN_004f162d();
      if ((909999999 < iVar2) && (iVar2 < 0x363d7f97)) {
        FUN_0083da14();
        FUN_0071795f(*(undefined4 *)(unaff_EBP + 8));
        uVar1 = 1;
        goto LAB_008359b8;
      }
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0xdee);
      uVar1 = *puVar3;
      *(undefined4 *)(unaff_EBP + 8) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uVar1 = FUN_00434e21(unaff_EBP + 8,uVar1,0xc);
      FUN_00471102(uVar1);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      goto LAB_00835999;
    }
  }
  else {
    uVar1 = FUN_00679d22(unaff_EBP + -0x10,0x9a);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00471102(uVar1,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_00835999:
    FUN_00414ebb();
  }
  uVar1 = 0;
LAB_008359b8:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


