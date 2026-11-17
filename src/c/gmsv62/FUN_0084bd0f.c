/* FUN_0084bd0f - 0x0084bd0f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084bd0f(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar6;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  FUN_00879bb8();
  uStack_28 = 0x84bd29;
  bVar1 = FUN_0042452b();
  if (bVar1 < 0x44) {
    if (bVar1 == 0x43) {
      *(undefined4 **)(unaff_EBP + -0x24) = &uStack_38;
      uVar6 = 0xcf5;
    }
    else {
      if (bVar1 == 2) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        uStack_28 = 0x84bda0;
        cVar2 = FUN_0042452b();
        uStack_28 = 0x84bdab;
        iVar3 = FUN_0042459a();
        if (cVar2 == '\0') {
          uStack_28 = 0xcf0;
          uStack_2c = unaff_EBP + -0x14;
          iStack_30 = 0x84bdc4;
          puVar4 = (undefined4 *)FUN_00679d22();
          uStack_28 = *puVar4;
          uStack_2c = unaff_EBP + -0x10;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          iStack_30 = 0x84bdd3;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0;
        }
        else if (iVar3 < 1) {
          uStack_28 = 0xcef;
          uStack_2c = unaff_EBP + -0x1c;
          iStack_30 = 0x84be23;
          puVar4 = (undefined4 *)FUN_00679d22();
          uStack_28 = *puVar4;
          uStack_2c = unaff_EBP + -0x10;
          *(undefined1 *)(unaff_EBP + -4) = 3;
          iStack_30 = 0x84be32;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0;
        }
        else {
          uStack_28 = 0xcee;
          uStack_2c = unaff_EBP + -0x18;
          iStack_30 = 0x84bdf4;
          piVar5 = (int *)FUN_00679d22();
          uStack_2c = *piVar5;
          iStack_30 = unaff_EBP + -0x10;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iStack_34 = 0x84be05;
          uStack_28 = iVar3;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0;
        }
        uStack_28 = 0x84be3f;
        FUN_00414ebb();
        uStack_28 = 0;
        uStack_2c = 0;
        iStack_30 = 0;
        iStack_34 = 0;
        *(undefined4 **)(unaff_EBP + -0x24) = &uStack_38;
        FUN_00450368(unaff_EBP + -0x10);
        FUN_007db3ad();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_0084bf1d:
        uStack_28 = 0x84bf22;
        FUN_00414ebb();
        goto LAB_0084bf5b;
      }
      if (bVar1 == 3) {
        *(undefined4 **)(unaff_EBP + -0x20) = &uStack_38;
        uVar6 = 0xcf1;
      }
      else if (bVar1 == 0x41) {
        *(undefined4 **)(unaff_EBP + -0x20) = &uStack_38;
        uVar6 = 0xcf3;
      }
      else {
        if (bVar1 != 0x42) goto LAB_0084bf5b;
        *(undefined4 **)(unaff_EBP + -0x20) = &uStack_38;
        uVar6 = 0xcf4;
      }
    }
  }
  else if (bVar1 == 0x44) {
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_38;
    uVar6 = 0xcf6;
  }
  else if (bVar1 == 0x45) {
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_38;
    uVar6 = 0xcf7;
  }
  else {
    if (bVar1 == 0x47) {
      *(undefined4 *)(unaff_EBP + 8) = 0;
      uStack_28 = 0xcfc;
      uStack_2c = unaff_EBP + -0x20;
      *(undefined4 *)(unaff_EBP + -4) = 4;
      iStack_30 = 0x84becc;
      puVar4 = (undefined4 *)FUN_00679d22();
      uStack_28 = (uint)*(byte *)(extraout_ECX + 0x2d01);
      iStack_30 = *puVar4;
      uStack_2c = (uint)*(byte *)(extraout_ECX + 0x2d00);
      iStack_34 = unaff_EBP + 8;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_38 = 0x84beec;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      uStack_28 = 0x84befb;
      FUN_00414ebb();
      uStack_28 = 0;
      uStack_2c = 0;
      iStack_30 = 0;
      iStack_34 = 0;
      *(undefined4 **)(unaff_EBP + -0x24) = &uStack_38;
      FUN_00450368(unaff_EBP + 8);
      FUN_007db3ad();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      goto LAB_0084bf1d;
    }
    if (bVar1 != 0x48) goto LAB_0084bf5b;
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_38;
    uVar6 = 0xcfe;
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iStack_30 = 0;
  iStack_34 = 0;
  FUN_00679d22(&uStack_38,uVar6);
  FUN_007db3ad();
LAB_0084bf5b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


