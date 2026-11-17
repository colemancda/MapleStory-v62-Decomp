/* FUN_0040e6e4 - 0x0040e6e4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0040e6e4(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int extraout_ECX;
  uint uVar6;
  int unaff_EBP;
  undefined1 *puVar7;
  undefined1 *puStack_b0;
  undefined1 *local_ac;
  
  FUN_00879bb8();
  uVar6 = *(uint *)(unaff_EBP + 0xc);
  iVar5 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x44) = extraout_ECX;
  *(uint *)(unaff_EBP + -0x40) = iVar5 << 8 | uVar6;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  local_ac = (undefined1 *)(unaff_EBP + -0x40);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x54) = extraout_ECX + 0x284;
  puStack_b0 = (undefined1 *)0x40e728;
  iVar2 = FUN_00416ce7();
  if (iVar2 == 0) {
    local_ac = (undefined1 *)0x40e760;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + 0xc) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0040eef7();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
    FUN_00412cd2();
    *(int *)(*(int *)(unaff_EBP + -0x14) + 0xc) = iVar5;
    *(uint *)(*(int *)(unaff_EBP + -0x14) + 0x10) = uVar6;
    *(undefined **)(unaff_EBP + -0x34) = &DAT_00978678 + uVar6 * 0x18;
    local_ac = (undefined1 *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_b0 = (undefined1 *)0x40e7ae;
    FUN_0040eff9();
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      *(undefined4 *)(unaff_EBP + 8) = 0;
      iVar5 = *(int *)(*(int *)(unaff_EBP + -0x34) + 8);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (iVar5 == 0) {
        local_ac = (undefined1 *)0x0;
        *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_b0;
        FUN_004833ff(&puStack_b0,uVar6);
        iVar5 = unaff_EBP + -0x84;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_0040263d(iVar5);
        FUN_004048a4(iVar5);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        puStack_b0 = (undefined1 *)0x40ea0e;
        uVar3 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
        local_ac = (undefined1 *)0x40ea1d;
        iVar5 = FUN_00404b30();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          local_ac = (undefined1 *)0x40ea2e;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        local_ac = (undefined1 *)0x40ea3e;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          local_ac = (undefined1 *)0x40ea49;
          FUN_00878dfb();
        }
      }
      else {
        local_ac = (undefined1 *)(unaff_EBP + 0xc);
        puStack_b0 = (undefined1 *)0x40e7dd;
        puVar4 = (undefined4 *)FUN_00679e4e();
        piVar1 = (int *)*puVar4;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (piVar1 == (int *)0x0) {
          puStack_b0 = (undefined1 *)0x0;
        }
        else {
          puStack_b0 = (undefined1 *)*piVar1;
        }
        local_ac = (undefined1 *)(unaff_EBP + 8);
        FUN_004172fb();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00402fa6();
        iVar5 = *(int *)(unaff_EBP + -0x34);
        for (puVar7 = (undefined1 *)0x0;
            (iVar2 = *(int *)(iVar5 + 0x14), iVar2 != 0 && (puVar7 < *(undefined1 **)(iVar2 + -4)));
            puVar7 = puVar7 + 1) {
          local_ac = (undefined1 *)0x0;
          puStack_b0 = puVar7;
          puVar4 = (undefined4 *)FUN_00416f08();
          *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_b0;
          FUN_004833ff(&puStack_b0,*puVar4);
          iVar2 = unaff_EBP + -100;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_0040263d(iVar2);
          FUN_004048a4(iVar2);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          puStack_b0 = (undefined1 *)0x40e85e;
          iVar2 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x30) = iVar2;
          *(undefined4 *)(unaff_EBP + 0xc) = 0;
          if (iVar2 != 0) {
            local_ac = (undefined1 *)0x40e874;
            iVar2 = FUN_00404b30();
            if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
              local_ac = (undefined1 *)0x40e885;
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 9;
          local_ac = (undefined1 *)0x40e892;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            local_ac = (undefined1 *)0x40e89d;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + 0xc) != 0) {
            FUN_0087a1b0();
            local_ac = (undefined1 *)0x0;
            puStack_b0 = &stack0xffffff5c;
            iVar2 = FUN_00416f08(puVar7);
            uVar3 = FUN_00412335(*(undefined4 *)(iVar2 + 4));
            *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_b0;
            FUN_004033a1(uVar3);
            iVar2 = unaff_EBP + -0x84;
            *(undefined1 *)(unaff_EBP + -4) = 9;
            FUN_0040263d(iVar2);
            FUN_004048a4(iVar2);
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            puStack_b0 = (undefined1 *)0x40e8f4;
            iVar2 = FUN_004032b4();
            *(int *)(unaff_EBP + -0x38) = iVar2;
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
            if (iVar2 != 0) {
              local_ac = (undefined1 *)0x40e90a;
              iVar2 = FUN_0041a581();
              if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
                local_ac = (undefined1 *)0x40e91b;
                FUN_00878dfb();
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            local_ac = (undefined1 *)0x40e92b;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              local_ac = (undefined1 *)0x40e936;
              FUN_00878dfb();
            }
            if (*(int *)(unaff_EBP + -0x10) != 0) {
              local_ac = *(undefined1 **)(unaff_EBP + -0x10);
              puStack_b0 = (undefined1 *)0x40e948;
              FUN_0040ee87();
              *(undefined1 *)(unaff_EBP + -4) = 0xe;
              FUN_0087a1b0();
              puStack_b0 = puVar7;
              local_ac = &stack0xffffff5c;
              puStack_b0 = (undefined1 *)FUN_00412335();
              *(undefined1 ***)(unaff_EBP + -0x20) = &local_ac;
              FUN_004033a1();
              *(undefined1 *)(unaff_EBP + -4) = 0xe;
              puStack_b0 = (undefined1 *)0x40e979;
              FUN_0040263d();
              puStack_b0 = (undefined1 *)0x40e980;
              FUN_0040bfd0();
              *(undefined1 *)(unaff_EBP + -4) = 0xd;
              local_ac = (undefined1 *)0x40e98d;
              iVar2 = FUN_00402bc3();
              if (iVar2 < 0) {
                local_ac = (undefined1 *)0x40e998;
                FUN_00878dfb();
              }
            }
            FUN_004125e6();
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_004027eb();
        }
        if (*(int *)(unaff_EBP + 8) == 0) {
          local_ac = (undefined1 *)0x40e9c1;
          FUN_00878dfb();
        }
        iVar5 = FUN_0040cf4d();
        if (iVar5 == 0) {
          local_ac = (undefined1 *)0x40e9d6;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 8),
                     (IBinding *)0x0);
        }
      }
      if (*(int *)(unaff_EBP + 8) != 0) {
        local_ac = (undefined1 *)0x40ea87;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x94));
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        if (*(int *)(unaff_EBP + 8) == 0) {
          local_ac = (undefined1 *)0x40ea9a;
          FUN_00878dfb();
        }
        local_ac = (undefined1 *)0x40eaa6;
        FUN_00404960();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        local_ac = (undefined1 *)0x40eab3;
        FUN_004035f5();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        FUN_004027b3();
        *(undefined4 *)(unaff_EBP + -0x50) = 0;
        while( true ) {
          if (*(int *)(unaff_EBP + -0x2c) == 0) {
            local_ac = (undefined1 *)0x40ead6;
            FUN_00878dfb();
          }
          local_ac = (undefined1 *)(unaff_EBP + -0x94);
          puStack_b0 = (undefined1 *)0x1;
          iVar5 = (**(code **)(**(int **)(unaff_EBP + -0x2c) + 0xc))(*(int **)(unaff_EBP + -0x2c));
          if (iVar5 != 0) break;
          local_ac = (undefined1 *)(unaff_EBP + -0x10);
          puStack_b0 = (undefined1 *)0x40eb04;
          FUN_00405a23();
          local_ac = (undefined1 *)(unaff_EBP + -0x10);
          *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xffffff58;
          puStack_b0 = (undefined1 *)0x40eb15;
          FUN_0040810c();
          local_ac = (undefined1 *)(unaff_EBP + -0x74);
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          puStack_b0 = (undefined1 *)0x40eb25;
          FUN_0040263d();
          puStack_b0 = (undefined1 *)0x40eb2c;
          FUN_004048a4();
          local_ac = (undefined1 *)(unaff_EBP + -0x30);
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          puStack_b0 = (undefined1 *)0x40eb3d;
          FUN_00412348();
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          local_ac = (undefined1 *)0x40eb4c;
          FUN_004172b7();
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          FUN_004027b3();
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            FUN_004125e6();
            *(undefined1 *)(unaff_EBP + -4) = 0x16;
            local_ac = (undefined1 *)0x40eb72;
            iVar5 = FUN_00402bc3();
            if (iVar5 < 0) {
              local_ac = (undefined1 *)0x40eb7d;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            FUN_00402fa6();
          }
          else {
            local_ac = (undefined1 *)0x40eb9a;
            iVar5 = FUN_004029b9();
            *(int *)(unaff_EBP + -0x3c) = iVar5;
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            if (iVar5 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = FUN_0040ef2a();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            if (*(int *)(unaff_EBP + 0xc) == 0) {
              local_ac = (undefined1 *)0x40ebc5;
              FUN_00878dfb();
            }
            local_ac = (undefined1 *)0x40ebd1;
            FUN_00404e7f();
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            local_ac = (undefined1 *)0x40ebe0;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar5 + 0xc),
                       *(IBinding **)(unaff_EBP + 0xc));
            *(undefined1 ***)(unaff_EBP + -0x3c) = &local_ac;
            puStack_b0 = (undefined1 *)0x3b6;
            FUN_00679e4e(&local_ac);
            puStack_b0 = (undefined1 *)(unaff_EBP + -0x4c);
            *(undefined1 *)(unaff_EBP + -4) = 0x1e;
            FUN_004115d9();
            FUN_00404e7f();
            puStack_b0 = (undefined1 *)(unaff_EBP + -0x84);
            *(undefined1 *)(unaff_EBP + -4) = 0x20;
            FUN_0040263d();
            local_ac = (undefined1 *)FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            puStack_b0 = (undefined1 *)0x40ec2f;
            uVar3 = FUN_00412550();
            *(undefined4 *)(iVar5 + 0x10) = uVar3;
            puStack_b0 = (undefined1 *)(unaff_EBP + -0x84);
            *(undefined1 *)(unaff_EBP + -4) = 0x20;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              local_ac = (undefined1 *)0x40ec4f;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            if (*(int **)(unaff_EBP + -0x4c) != (int *)0x0) {
              local_ac = (undefined1 *)0x40ec60;
              (**(code **)(**(int **)(unaff_EBP + -0x4c) + 8))();
            }
            *(undefined1 ***)(unaff_EBP + -0x3c) = &local_ac;
            puStack_b0 = (undefined1 *)0x3b7;
            FUN_00679e4e(&local_ac);
            puStack_b0 = (undefined1 *)(unaff_EBP + -0x48);
            *(undefined1 *)(unaff_EBP + -4) = 0x22;
            FUN_004115d9();
            FUN_00404e7f();
            puStack_b0 = (undefined1 *)(unaff_EBP + -0xa4);
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            FUN_0040263d();
            local_ac = (undefined1 *)FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            puStack_b0 = (undefined1 *)0x40ecaf;
            uVar3 = FUN_00412550();
            *(undefined4 *)(iVar5 + 0x14) = uVar3;
            puStack_b0 = (undefined1 *)(unaff_EBP + -0xa4);
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              local_ac = (undefined1 *)0x40eccf;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            if (*(int **)(unaff_EBP + -0x48) != (int *)0x0) {
              local_ac = (undefined1 *)0x40ece0;
              (**(code **)(**(int **)(unaff_EBP + -0x48) + 8))();
            }
            *(int *)(unaff_EBP + -0x58) = iVar5;
            if (iVar5 != 0) {
              local_ac = (undefined1 *)0x40ecf1;
              InterlockedIncrement((LONG *)(iVar5 + 4));
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
            local_ac = (undefined1 *)0x40ed01;
            FUN_004116b0();
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            if (*(int *)(unaff_EBP + -0x58) != 0) {
              local_ac = (undefined1 *)0x40ed13;
              FUN_004132dd();
              *(undefined4 *)(unaff_EBP + -0x58) = 0;
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
              local_ac = (undefined1 *)0x40ed27;
              (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
              local_ac = (undefined1 *)0x40ed38;
              (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x16;
            local_ac = (undefined1 *)0x40ed45;
            iVar5 = FUN_00402bc3();
            if (iVar5 < 0) {
              local_ac = (undefined1 *)0x40ed50;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            if (*(int *)(unaff_EBP + -0x10) != 0) {
              FUN_004030b1();
              *(undefined4 *)(unaff_EBP + -0x10) = 0;
            }
          }
        }
        iVar5 = *(int *)(unaff_EBP + 0x10);
        if (*(int *)(*(int *)(unaff_EBP + -0x34) + 4) != 0) {
          uVar6 = *(uint *)(iVar5 + 0x10);
          while (uVar6 != 0) {
            if ((uVar6 != *(uint *)(iVar5 + 0xc)) && (uVar6 != *(uint *)(iVar5 + 0x10))) {
              local_ac = (undefined1 *)0x40ed90;
              FUN_004116b0();
            }
            iVar2 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 8);
            uVar6 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
          }
        }
        FUN_00413af5();
        local_ac = (undefined1 *)0x40edc2;
        FUN_004127d1();
        iVar5 = *(int *)(unaff_EBP + -0x14);
        local_ac = (undefined1 *)0x40edd7;
        uVar3 = FUN_00411c40();
        *(undefined4 *)(iVar5 + 0x34) = uVar3;
        iVar5 = *(int *)(unaff_EBP + -0x14);
        local_ac = (undefined1 *)(unaff_EBP + -0x40);
        puStack_b0 = (undefined1 *)0x40eded;
        uVar3 = FUN_00416d3b();
        *(undefined4 *)(iVar5 + 0x30) = uVar3;
        iVar5 = *(int *)(unaff_EBP + -0x14);
        uVar3 = (*DAT_0097b704)();
        *(undefined4 *)(iVar5 + 0x2c) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
          local_ac = (undefined1 *)0x40ee0d;
          (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        local_ac = (undefined1 *)0x40ee1d;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          local_ac = (undefined1 *)0x40ee28;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
          local_ac = (undefined1 *)0x40ee39;
          (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
          local_ac = (undefined1 *)0x40ee4a;
          (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          local_ac = (undefined1 *)0x40ee5b;
          FUN_0041319b();
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x24) != 0) {
          local_ac = (undefined1 *)0x40ee70;
          FUN_0041319b();
        }
        goto LAB_0040ee70;
      }
      FUN_004027eb();
    }
    FUN_004027eb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00412ce4();
  }
  else {
    iVar5 = *(int *)(unaff_EBP + -0x24);
    uVar3 = (*DAT_0097b704)();
    *(undefined4 *)(iVar5 + 0x2c) = uVar3;
    FUN_00413af5();
    local_ac = (undefined1 *)0x40e74f;
    FUN_004127d1();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412ce4();
LAB_0040ee70:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


