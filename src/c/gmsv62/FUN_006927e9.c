/* FUN_006927e9 - 0x006927e9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006927e9(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar4;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  
  FUN_00879bb8();
  if (-1 < (int)*(uint *)(extraout_ECX + 0xe8)) {
    if (*(int *)(extraout_ECX + 0xcc) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(*(int *)(extraout_ECX + 0xcc) + -4);
    }
    if ((*(uint *)(extraout_ECX + 0xe8) < uVar1) && (*(int *)(extraout_ECX + 0xfc) == 0)) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      iVar3 = *(int *)(extraout_ECX + 0xc4);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar3 < 1) {
        uStack_2c = 0x34b;
        iStack_30 = unaff_EBP + -0x18;
        iStack_34 = 0x692885;
        uStack_2c = FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_30 = 0x692892;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0;
      }
      else {
        uStack_2c = 0x34c;
        iStack_30 = unaff_EBP + -0x14;
        iStack_34 = 0x692851;
        puVar2 = (undefined4 *)FUN_00679d22();
        uStack_2c = *(undefined4 *)(extraout_ECX + 0xc4);
        iStack_30 = *puVar2;
        iStack_34 = unaff_EBP + -0x10;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        uStack_38 = 0x692867;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0;
      }
      uStack_2c = 0x69289d;
      FUN_00414ebb();
      uStack_2c = 0;
      iStack_30 = 0;
      iStack_34 = 0;
      uStack_38 = 0;
      *(undefined1 **)(unaff_EBP + -0x14) = auStack_3c;
      FUN_00450368(unaff_EBP + -0x10);
      iVar3 = FUN_007db791();
      if (iVar3 == 6) {
        piVar4 = (int *)(*(int *)(extraout_ECX + 0xe8) * 0x1c + *(int *)(extraout_ECX + 0xcc));
        uStack_2c = 0;
        iStack_30 = 0;
        iStack_34 = 0x3a;
        *(int *)(unaff_EBP + -0x14) = *piVar4 / 1000000;
        uStack_38 = 0x6928e9;
        FUN_0060142b();
        uStack_2c = 4;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_30 = 0x6928f7;
        FUN_00457cda();
        uStack_2c = *(undefined4 *)(unaff_EBP + -0x14);
        iStack_30 = 0x692902;
        FUN_00457cda();
        uStack_2c = (uint)*(byte *)(piVar4 + 2);
        iStack_30 = 0x692910;
        FUN_00457cda();
        uStack_2c = unaff_EBP + -0x28;
        iStack_30 = 0x69291f;
        FUN_004751b2();
        iStack_30 = *(undefined4 *)(unaff_EBP + -0x14);
        uStack_2c = extraout_ECX + 0xd4;
        *(undefined4 *)(extraout_ECX + 0xfc) = 1;
        *(int *)(extraout_ECX + 0xf8) = iStack_30;
        iStack_34 = 0x692941;
        FUN_00691471();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        uStack_2c = 0x69294c;
        FUN_0045ebca();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uStack_2c = 0x692958;
      FUN_00414ebb();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


