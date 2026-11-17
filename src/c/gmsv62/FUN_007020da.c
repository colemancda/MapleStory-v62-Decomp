/* FUN_007020da - 0x007020da in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007020da(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_00879bb8();
  uStack_14 = *(undefined4 *)(unaff_EBP + 0xc);
  uStack_18 = *(undefined4 *)(unaff_EBP + 8);
  uStack_1c = 0x7020f9;
  iVar1 = (**(code **)(*(int *)(extraout_ECX + -4) + 0x18))();
  if (iVar1 != 0) {
    uStack_1c = 0;
    uStack_20 = 0;
    uStack_24 = 200;
    uStack_28 = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    if (*(int *)(extraout_ECX + 0x574) == 0) {
      *(undefined1 **)(unaff_EBP + 8) = auStack_34;
      uStack_38 = 0x1005;
      FUN_00679d22(auStack_34);
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_38;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      FUN_00679d22(&uStack_38,0x1003);
      *(undefined1 *)(unaff_EBP + -4) = 3;
    }
    else {
      *(undefined1 **)(unaff_EBP + 8) = auStack_34;
      uStack_38 = 0x1006;
      FUN_00679d22(auStack_34);
      *(undefined4 **)(unaff_EBP + -0x10) = &uStack_38;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00679d22(&uStack_38,0x1004);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    iVar1 = FUN_004a10ab();
    iVar2 = FUN_004a10ab();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = (**(code **)(*(int *)(iVar1 + 4) + 0x30))();
    iVar1 = iVar1 + *(int *)(unaff_EBP + 0xc);
    FUN_00424df4(iVar1);
    iVar3 = FUN_00424ee1();
    iVar2 = (**(code **)(*(int *)(iVar2 + 4) + 0x2c))();
    FUN_0074da18(iVar3 + iVar2 + *(int *)(extraout_ECX + 0x18),iVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


