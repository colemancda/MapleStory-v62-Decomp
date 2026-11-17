/* FUN_0068e71a - 0x0068e71a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0068e71a(void)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined1 *puStack_38;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x1ac) == 0) {
    if (1 < *(int *)(extraout_ECX + 200)) {
      puStack_38 = (undefined1 *)0x0;
      iStack_3c = 500;
      *(undefined4 *)(unaff_EBP + -0x14) = DAT_00978368;
      uStack_40 = 0x68e75f;
      iVar3 = FUN_004becbc();
      if (iVar3 != 0) {
        puStack_38 = (undefined1 *)(unaff_EBP + -0x24);
        iStack_3c = 0x68e772;
        iVar3 = FUN_00455c59();
        iVar3 = *(int *)(iVar3 + 4);
        puStack_38 = (undefined1 *)0x68e77d;
        FUN_0045e4a2();
        puStack_38 = (undefined1 *)0x69c;
        iStack_3c = 0x68e78c;
        iVar4 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x10) = iVar4;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          puStack_38 = (undefined1 *)0x68e79d;
          iVar4 = FUN_007e62e9();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        uVar5 = -(uint)(iVar4 != 0) & iVar4 + 8U;
        *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar5 != 0) & uVar5 - 8;
        puStack_38 = (undefined1 *)0x68e7c4;
        FUN_004c26c4();
        puStack_38 = (undefined1 *)0x0;
        iStack_3c = 1;
        puStack_48 = (undefined1 *)&uStack_40;
        *(undefined4 **)(unaff_EBP + -0x10) = &uStack_40;
        uStack_44 = 0x1aa;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        FUN_00679d22();
        uStack_44 = 0;
        puStack_48 = (undefined1 *)0x2;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_004c2677();
        FUN_007eddac();
        puStack_38 = *(undefined1 **)(iVar3 + 0xad);
        iStack_3c = iVar3 + 0xa5;
        uStack_40 = 0x68e806;
        uStack_44 = FUN_00413367();
        puStack_38 = (undefined1 *)0x0;
        iStack_3c = 10;
        uStack_40 = 0;
        puStack_48 = (undefined1 *)0x1;
        FUN_007edf4a(1);
        puStack_38 = (undefined1 *)0x68e81f;
        FUN_007e6e3c();
        puStack_38 = (undefined1 *)0x68e827;
        iVar4 = FUN_004bc6a2();
        if (iVar4 == 1) {
          puStack_38 = *(undefined1 **)(iVar3 + 0x35);
          iStack_3c = iVar3 + 0x33;
          *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0xbc);
          uStack_40 = 0x68e847;
          bVar2 = FUN_0045f03e();
          puVar1 = puStack_38;
          if ((bVar2 < 0x10) && (1000000 < *(int *)(unaff_EBP + -0x10))) {
            puStack_38 = (undefined1 *)0x0;
            iStack_3c = 0;
            uStack_40 = 0;
            uStack_44 = 0;
            puStack_48 = puVar1;
            *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_48;
            FUN_00679d22(&puStack_48,0xf43);
            FUN_007db3ad();
          }
          else {
            puStack_38 = (undefined1 *)0x0;
            iStack_3c = 0;
            uStack_40 = 0x6f;
            uStack_44 = 0x68e886;
            FUN_0060142b();
            puStack_38 = (undefined1 *)0xf;
            *(undefined1 *)(unaff_EBP + -4) = 3;
            iStack_3c = 0x68e894;
            FUN_00457cda();
            puStack_38 = *(undefined1 **)(*(int *)(unaff_EBP + -0x18) + 0xbc);
            iStack_3c = 0x68e8a5;
            FUN_00457d37();
            puStack_38 = (undefined1 *)(unaff_EBP + -0x34);
            iStack_3c = 0x68e8b4;
            FUN_004751b2();
            iVar3 = *(int *)(unaff_EBP + -0x14);
            *(undefined4 *)(iVar3 + 0x208c) = 1;
            puStack_38 = (undefined1 *)0x68e8c2;
            uVar6 = FUN_007d1e08();
            *(undefined4 *)(iVar3 + 0x2090) = uVar6;
            *(undefined1 *)(unaff_EBP + -4) = 1;
            puStack_38 = (undefined1 *)0x68e8d3;
            FUN_0045ebca();
          }
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        puStack_38 = (undefined1 *)0x68e8df;
        FUN_004c26e1();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


