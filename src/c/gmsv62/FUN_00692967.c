/* FUN_00692967 - 0x00692967 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00692967(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  uint uVar5;
  int unaff_EBP;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  
  FUN_00879bb8();
  uVar1 = *(uint *)(extraout_ECX + 0xec);
  if (-1 < (int)uVar1) {
    if (*(int *)(extraout_ECX + 0xd0) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(*(int *)(extraout_ECX + 0xd0) + -4);
    }
    if ((uVar1 < uVar5) && (*(int *)(extraout_ECX + 0xfc) == 0)) {
      piVar2 = (int *)(uVar1 * 0x1c + *(int *)(extraout_ECX + 0xd0));
      *(int *)(unaff_EBP + -0x38) = piVar2[6];
      iStack_50 = 0x6929c7;
      FUN_0052e11f();
      *(int *)(unaff_EBP + -0x20) = piVar2[2];
      iVar3 = *piVar2;
      *(int *)(unaff_EBP + -0x34) = iVar3;
      iStack_50 = *(undefined4 *)(unaff_EBP + -0x38);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 1;
      *(int *)(unaff_EBP + -0x2c) = iVar3 / 1000000;
      *(int *)(unaff_EBP + -0x18) = piVar2[1];
      iStack_54 = 0x6929f5;
      iVar3 = FUN_004c24cb();
      if (iVar3 == 0) {
        iStack_50 = 0x34f;
        iStack_54 = unaff_EBP + -0x24;
        iStack_58 = 0x692a0f;
        puVar4 = (undefined4 *)FUN_00679d22();
        iStack_50 = *(undefined4 *)(unaff_EBP + -0x18);
        iStack_58 = *puVar4;
        iStack_54 = *(undefined4 *)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        uStack_5c = 0x692a23;
        iVar3 = FUN_0069332d();
        *(int *)(unaff_EBP + -0x1c) = iVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x24) != 0) {
          iStack_50 = *(int *)(unaff_EBP + -0x24) + -0xc;
          iStack_54 = 0x692a39;
          FUN_00434e38();
          iVar3 = *(int *)(unaff_EBP + -0x1c);
        }
        if ((iVar3 < 1) || (*(int *)(unaff_EBP + -0x18) < iVar3)) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iStack_50 = 0x692a52;
          FUN_0046575e();
          goto LAB_00692bbc;
        }
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      iVar3 = *(int *)(extraout_ECX + 200);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar3 < 1) {
        iStack_50 = 0x34d;
        iStack_54 = unaff_EBP + -0x24;
        iStack_58 = 0x692aa8;
        iStack_50 = FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        iStack_54 = 0x692ab5;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 2;
      }
      else {
        iStack_50 = 0x34e;
        iStack_54 = unaff_EBP + -0x24;
        iStack_58 = 0x692a76;
        puVar4 = (undefined4 *)FUN_00679d22();
        iStack_50 = *(undefined4 *)(extraout_ECX + 200);
        iStack_54 = *puVar4;
        iStack_58 = unaff_EBP + -0x14;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        uStack_5c = 0x692a8c;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 2;
      }
      iStack_50 = 0x692ac1;
      FUN_00414ebb();
      iStack_50 = 0;
      iStack_54 = 0;
      iStack_58 = 0;
      uStack_5c = 0;
      *(undefined1 **)(unaff_EBP + -0x24) = auStack_60;
      FUN_00450368(unaff_EBP + -0x14);
      iVar3 = FUN_007db791();
      if (iVar3 == 6) {
        iStack_50 = unaff_EBP + -0x28;
        iStack_54 = 0x692af4;
        FUN_00455c59();
        if (*(int *)(unaff_EBP + -0x24) != 0) {
          iStack_50 = 0;
          iStack_54 = 0x692b05;
          FUN_0045e7c2();
        }
        if (*(int *)(unaff_EBP + -0x38) != 0) {
          iStack_50 = *(undefined4 *)(unaff_EBP + -0x20);
          iStack_58 = unaff_EBP + -0x30;
          iStack_54 = *(undefined4 *)(unaff_EBP + -0x2c);
          uStack_5c = 0x692b1f;
          iVar3 = FUN_00458c4f();
          *(bool *)(unaff_EBP + -0xd) = *(int *)(iVar3 + 4) != *(int *)(unaff_EBP + -0x38);
          if (*(int *)(unaff_EBP + -0x2c) != 0) {
            iStack_50 = 0;
            iStack_54 = 0x692b37;
            FUN_00449913();
            *(undefined4 *)(unaff_EBP + -0x2c) = 0;
          }
          if (*(char *)(unaff_EBP + -0xd) == '\0') {
            iStack_50 = 0;
            iStack_54 = 0;
            iStack_58 = 0x3a;
            uStack_5c = 0x692b4b;
            FUN_0060142b();
            iStack_50 = 5;
            *(undefined1 *)(unaff_EBP + -4) = 5;
            iStack_54 = 0x692b59;
            FUN_00457cda();
            iStack_50 = *(undefined4 *)(unaff_EBP + -0x20);
            iStack_54 = 0x692b64;
            FUN_0045d247();
            iStack_50 = *(undefined4 *)(unaff_EBP + -0x34);
            iStack_54 = 0x692b6f;
            FUN_00457d37();
            iStack_50 = *(undefined4 *)(unaff_EBP + -0x1c);
            iStack_54 = 0x692b7a;
            FUN_0045d247();
            iStack_50 = unaff_EBP + -0x4c;
            iStack_54 = 0x692b89;
            FUN_004751b2();
            *(undefined4 *)(extraout_ECX + 0xfc) = 1;
            *(undefined1 *)(unaff_EBP + -4) = 2;
            iStack_50 = 0x692b9f;
            FUN_0045ebca();
          }
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_50 = 0x692baa;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x38) != 0) {
        iStack_50 = 0;
        iStack_54 = 0x692bbc;
        FUN_00449913();
      }
    }
  }
LAB_00692bbc:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


