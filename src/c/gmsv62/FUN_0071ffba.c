/* FUN_0071ffba - 0x0071ffba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0071ffba(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  
  FUN_00879bb8();
  if ((*(int *)(unaff_EBP + 8) == 3000) && (*(int *)(extraout_ECX + 0x570) != -1)) {
    iStack_10 = unaff_EBP + 8;
    uStack_14 = 0x71fff2;
    FUN_0045b90e();
    iStack_10 = 1;
    uStack_14 = 0;
    iStack_18 = 1;
    uStack_1c = 0x400;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_20 = 0x720009;
    iStack_18 = FUN_00415015();
    uStack_1c = 0x72000f;
    uVar1 = FUN_00471777();
    iStack_10 = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
    uStack_14 = 0x72001f;
    FUN_004150c0();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_20;
      uVar1 = 0x11d;
    }
    else {
      iStack_10 = *(undefined4 *)(*(int *)(extraout_ECX + 0x78) + 0x48);
      iStack_18 = unaff_EBP + 8;
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_14;
      uStack_1c = 0x72004a;
      FUN_00450368();
      iStack_18 = *(undefined4 *)(extraout_ECX + 0x570);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uStack_1c = 0x720058;
      FUN_00724127();
      uStack_1c = 0x72005f;
      FUN_00598faf();
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_20;
      uVar1 = 0xc96;
    }
    iStack_10 = 0;
    uStack_14 = 0;
    iStack_18 = 0;
    uStack_1c = 0;
    FUN_00679d22(&uStack_20,uVar1);
    FUN_007db3ad();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_10 = 0x72008d;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


