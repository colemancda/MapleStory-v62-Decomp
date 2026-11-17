/* FUN_0073d725 - 0x0073d725 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0073d725(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  int unaff_EBP;
  int iVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  int iStack_34;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  uVar4 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  do {
    if ((DAT_0097be44 == 0) || (*(uint *)(DAT_0097be44 + -4) <= uVar4)) {
      puVar2 = *(undefined4 **)(unaff_EBP + 8);
      iStack_34 = unaff_EBP + -0x14;
      *puVar2 = 0;
      puStack_38 = (undefined1 *)0x73d9f2;
      FUN_004725b8();
      *(undefined4 *)(unaff_EBP + -0x30) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_34 = 0x73da04;
      FUN_0045f10c();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return puVar2;
    }
    iVar5 = uVar4 * 8;
    iVar3 = *(int *)(iVar5 + 4 + DAT_0097be44);
    iStack_34 = *(int *)(iVar3 + 0x18);
    puStack_38 = (undefined1 *)(iVar3 + 0x10);
    uStack_3c = 0x73d77c;
    iVar3 = FUN_00413367();
    if (iVar3 == 0) {
LAB_0073d856:
      iVar3 = *(int *)(iVar5 + 4 + DAT_0097be44);
      iStack_34 = *(int *)(iVar3 + 0x18);
      puStack_38 = (undefined1 *)(iVar3 + 0x10);
      uStack_3c = 0x73d86b;
      iVar3 = FUN_00413367();
      if (iVar3 == 1) {
        iStack_34 = *(int *)(unaff_EBP + -0x10);
        puStack_38 = (undefined1 *)0x73d880;
        FUN_00748cb0();
        iStack_34 = 0x73d887;
        iVar3 = FUN_0074883d();
        puStack_38 = (undefined1 *)(iVar3 + 0xc);
        *(int **)(unaff_EBP + -0x24) = &iStack_34;
        uStack_3c = 0x73d896;
        FUN_004343e4();
        puStack_38 = (undefined1 *)(unaff_EBP + -0x2c);
        uStack_3c = 0x73d8a2;
        FUN_0073d3e0();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_34 = 0x73d8ad;
        uStack_48 = FUN_00411641();
        iStack_34 = 0;
        puStack_38 = (undefined1 *)0x0;
        uStack_3c = 0;
        iStack_40 = 0;
        uStack_44 = 0xffffffff;
        uStack_4c = 0;
        uStack_50 = 0;
        (*DAT_0097b4cc)();
        iStack_34 = 0x73d8c9;
        FUN_0087a1b0();
        iStack_34 = -1;
        uStack_3c = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_40 = 0x73d8d7;
        puStack_38 = &stack0xffffffd0;
        FUN_00748cb0();
        uStack_3c = 0x73d8de;
        iStack_40 = FUN_0074883d();
        iStack_40 = iStack_40 + 0xc;
        *(undefined4 **)(unaff_EBP + -0x24) = &uStack_3c;
        uStack_44 = 0x73d8ed;
        FUN_004343e4();
        iStack_40 = unaff_EBP + -0x28;
        uStack_44 = 0x73d8f9;
        FUN_0073d3e0();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        uStack_3c = 0x73d904;
        uStack_3c = FUN_00411641();
        iStack_40 = 0x73d90a;
        puStack_38 = (undefined1 *)FUN_0045010e();
        iStack_34 = -1;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        uStack_3c = 0x73d91a;
        FUN_00414edd();
        iStack_34 = unaff_EBP + -0x18;
        puStack_38 = (undefined1 *)0xffffffff;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        uStack_3c = 0x73d92b;
        FUN_004655d4();
        puStack_38 = (undefined1 *)0x73d932;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_34 = 0x73d93e;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_34 = 0x73d94a;
        FUN_00402676();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iStack_34 = 0x73d956;
        FUN_00402676();
      }
      else {
        uStack_48 = *(undefined4 *)(*(int *)(iVar5 + 4 + DAT_0097be44) + 0xc);
        iStack_34 = 0;
        puStack_38 = (undefined1 *)0x0;
        uStack_3c = 0;
        iStack_40 = 0;
        uStack_44 = 0xffffffff;
        uStack_4c = 0;
        uStack_50 = 0;
        (*DAT_0097b4cc)();
        FUN_0087a1b0();
        uVar1 = *(undefined4 *)(*(int *)(iVar5 + 4 + DAT_0097be44) + 0xc);
        *(undefined4 **)(unaff_EBP + -0x24) = &uStack_50;
        (*DAT_0097b4cc)(0,0,uVar1,0xffffffff,*(undefined4 *)(unaff_EBP + -0x24),0x3fffffff,0,0);
        iStack_34 = -1;
        puStack_38 = *(undefined1 **)(unaff_EBP + -0x24);
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        uStack_3c = 0x73d9b2;
        FUN_00414edd();
        iStack_34 = unaff_EBP + -0x1c;
        puStack_38 = (undefined1 *)0xffffffff;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        uStack_3c = 0x73d9c4;
        FUN_004655d4();
        puStack_38 = (undefined1 *)0x73d9cb;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iStack_34 = 0x73d9d7;
        FUN_00414ebb();
      }
    }
    else {
      iVar3 = *(int *)(iVar5 + 4 + DAT_0097be44);
      iStack_34 = *(int *)(iVar3 + 0x18);
      puStack_38 = (undefined1 *)(iVar3 + 0x10);
      uStack_3c = 0x73d79b;
      iVar3 = FUN_00413367();
      if (iVar3 == 1) goto LAB_0073d856;
      iVar3 = *(int *)(iVar5 + 4 + DAT_0097be44);
      iStack_34 = *(int *)(iVar3 + 0x18);
      puStack_38 = (undefined1 *)(iVar3 + 0x10);
      uStack_3c = 0x73d7bb;
      iVar3 = FUN_00413367();
      if (iVar3 == 2) goto LAB_0073d856;
      iVar3 = *(int *)(iVar5 + 4 + DAT_0097be44);
      iStack_34 = *(int *)(iVar3 + 0x18);
      puStack_38 = (undefined1 *)(iVar3 + 0x10);
      uStack_3c = 0x73d7db;
      iVar3 = FUN_00413367();
      if (iVar3 == 3) goto LAB_0073d856;
      iVar3 = *(int *)(iVar5 + 4 + DAT_0097be44);
      iStack_34 = *(int *)(iVar3 + 0x18);
      puStack_38 = (undefined1 *)(iVar3 + 0x10);
      uStack_3c = 0x73d7f7;
      iVar3 = FUN_00413367();
      if (iVar3 == 0xd) goto LAB_0073d856;
      iVar3 = *(int *)(iVar5 + 4 + DAT_0097be44);
      iStack_34 = *(int *)(iVar3 + 0x18);
      puStack_38 = (undefined1 *)(iVar3 + 0x10);
      uStack_3c = 0x73d813;
      iVar3 = FUN_00413367();
      if (iVar3 == 0xe) goto LAB_0073d856;
      iVar3 = *(int *)(iVar5 + 4 + DAT_0097be44);
      iStack_34 = *(int *)(iVar3 + 0x18);
      puStack_38 = (undefined1 *)(iVar3 + 0x10);
      uStack_3c = 0x73d82f;
      iVar3 = FUN_00413367();
      if (iVar3 == 0xf) goto LAB_0073d856;
      iVar3 = *(int *)(iVar5 + 4 + DAT_0097be44);
      iStack_34 = *(int *)(iVar3 + 0x18);
      puStack_38 = (undefined1 *)(iVar3 + 0x10);
      uStack_3c = 0x73d84b;
      iVar3 = FUN_00413367();
      if (iVar3 == 4) goto LAB_0073d856;
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    uVar4 = *(uint *)(unaff_EBP + -0x10);
  } while( true );
}


