/* FUN_0045d5ff - 0x0045d5ff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0045d5ff(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puVar7;
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 0x40);
  *(int *)(unaff_EBP + -0x28) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar3 == 0) {
    local_68 = 0x99;
    iStack_6c = 0x45d628;
    FUN_00464f0d();
    goto LAB_0045daeb;
  }
  if (*(int *)(extraout_ECX + 0x18) != 0) goto LAB_0045daeb;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piVar1 = (int *)(DAT_00978368 + 0x3278);
  local_68 = DAT_00978368 + 0x3288;
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(DAT_00978368 + 0x3284);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int **)(unaff_EBP + -0x3c) = piVar1;
  iStack_6c = 0x45d664;
  FUN_00414f8b();
  local_68 = unaff_EBP + -0x2c;
  iStack_6c = 0x45d66f;
  iVar3 = FUN_0045c1e1();
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (-1 < iVar3) {
    iVar4 = *piVar1;
    local_68 = 0x45d68a;
    FUN_0045e45d();
    local_68 = 0x45d692;
    FUN_0045e46f();
    iVar3 = *(int *)(iVar4 + iVar3 * 8 + 4);
    *(int *)(unaff_EBP + -0x48) = iVar3;
    if (*(int *)(iVar3 + 0x40) != 0) {
      if (*(int *)(iVar3 + 0x48) != 0) {
        local_68 = *(int *)(unaff_EBP + -0x2c);
        iStack_6c = 0x45d6b0;
        iVar3 = FUN_0045cf62();
        if (iVar3 == 0) goto LAB_0045daa9;
      }
      local_68 = 0x45d6c3;
      iVar4 = FUN_0045e2eb();
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
      *(undefined4 *)(unaff_EBP + -0x38) = 0;
      iVar3 = extraout_ECX;
      while ((*(int *)(iVar3 + 0x44) != 0 &&
             (*(uint *)(unaff_EBP + -0x34) < *(uint *)(*(int *)(iVar3 + 0x44) + -4)))) {
        puVar7 = (undefined4 *)
                 (*(int *)(unaff_EBP + -0x38) + *(int *)(*(int *)(unaff_EBP + -0x28) + 0x44));
        local_68 = puVar7[4];
        if (local_68 != -1) {
          *(int *)(unaff_EBP + -0x18) = local_68;
          while (*(int *)(unaff_EBP + -0x18) < local_68 + puVar7[5]) {
            if (*(int *)(*(int *)(**(int **)(unaff_EBP + -0x3c) + 4 +
                                 *(int *)(unaff_EBP + -0x18) * 8) + 0xc) ==
                *(int *)(unaff_EBP + -0x2c)) {
              local_68 = *(int *)(unaff_EBP + -0x18) - local_68;
              iStack_6c = puVar7[1];
              uStack_70 = *puVar7;
              iStack_74 = 0x45d72e;
              FUN_0045d016();
            }
            *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
            local_68 = puVar7[4];
          }
        }
        *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
        *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x38) + 0x1c;
        iVar3 = *(int *)(unaff_EBP + -0x28);
      }
      local_68 = 0x45d747;
      iVar5 = FUN_007ee7a2();
      *(int *)(unaff_EBP + -0x40) = iVar5;
      if (iVar5 < 0) {
        *(undefined1 *)(unaff_EBP + -4) = 0;
        local_68 = 0x45d759;
        FUN_0045e46f();
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        local_68 = 0x45d770;
        local_68 = FUN_0045e2eb();
        uVar2 = *(undefined4 *)(*(int *)(unaff_EBP + -0x48) + 0x20);
        *(int *)(unaff_EBP + -0x18) = local_68;
        *(undefined4 *)(unaff_EBP + -0x38) = uVar2;
        if (iVar4 / 100000 == 0x5b) {
          iStack_6c = unaff_EBP + -0x34;
          uStack_70 = 0x45d790;
          local_68 = FUN_00556acf();
          *(undefined4 *)(unaff_EBP + -0x1c) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 3;
        }
        else {
          iStack_6c = unaff_EBP + -0x3c;
          uStack_70 = 0x45d7ac;
          local_68 = FUN_0045a1d8();
          *(undefined4 *)(unaff_EBP + -0x1c) = 2;
          *(undefined4 *)(unaff_EBP + -4) = 4;
        }
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        iStack_6c = 0x45d7c6;
        FUN_00414f8b();
        *(undefined4 *)(unaff_EBP + -4) = 7;
        if ((*(byte *)(unaff_EBP + -0x1c) & 2) != 0) {
          *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffd;
          local_68 = 0x45d7df;
          FUN_00414ebb();
        }
        *(undefined4 *)(unaff_EBP + -4) = 6;
        if ((*(byte *)(unaff_EBP + -0x1c) & 1) != 0) {
          local_68 = 0x45d7f4;
          FUN_00414ebb();
        }
        local_68 = *(int *)(iVar3 + 0x24);
        iStack_6c = iVar3 + 0x1c;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        uStack_70 = 0x45d803;
        iVar4 = FUN_00413367();
        if (*(int *)(unaff_EBP + -0x38) <= iVar4) {
          *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
        }
        local_68 = *(int *)(iVar3 + 0x3c);
        iStack_6c = iVar3 + 0x34;
        uStack_70 = 0x45d81a;
        iVar5 = FUN_00413367();
        iVar4 = local_68;
        if (*(int *)(unaff_EBP + -0x38) <= iVar5) {
          *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 4;
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          local_68 = 0;
          iStack_6c = 0;
          uStack_70 = 0;
          iStack_74 = 0;
          iStack_78 = iVar4;
          *(int **)(unaff_EBP + -0x40) = &iStack_78;
          uStack_7c = 0x224;
          FUN_00679d22(&iStack_78);
          uStack_7c = 0x45d849;
          FUN_007db3ad();
        }
        else {
          local_68 = 0xac;
          iStack_6c = 0x45d860;
          iVar4 = FUN_004029b9();
          *(int *)(unaff_EBP + -0x1c) = iVar4;
          *(undefined1 *)(unaff_EBP + -4) = 8;
          if (iVar4 == 0) {
            iVar4 = 0;
          }
          else {
            local_68 = 0x45d872;
            iVar4 = FUN_0069b917();
          }
          uVar6 = -(uint)(iVar4 != 0) & iVar4 + 8U;
          *(uint *)(unaff_EBP + -0x50) = -(uint)(uVar6 != 0) & uVar6 - 8;
          *(undefined1 *)(unaff_EBP + -4) = 6;
          local_68 = 0x45d899;
          FUN_0045e725();
          iStack_6c = unaff_EBP + -0x10;
          *(int **)(unaff_EBP + -0x1c) = &local_68;
          *(undefined1 *)(unaff_EBP + -4) = 9;
          local_68 = 0;
          uStack_70 = 0x45d8ae;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 9;
          iStack_6c = 0x45d8ba;
          FUN_0045e27c();
          iStack_6c = 0x45d8c1;
          FUN_0069c891();
          local_68 = 0x45d8c9;
          iVar4 = FUN_004bc6a2();
          if (iVar4 == 1) {
            *(undefined4 *)(unaff_EBP + -0x30) = 0;
            local_68 = unaff_EBP + -0x30;
            iStack_6c = unaff_EBP + -0x10;
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            uStack_70 = 0x45d8e9;
            FUN_0069c81a();
            local_68 = 0x20d;
            iStack_6c = unaff_EBP + -0x1c;
            uStack_70 = 0x45d8fc;
            puVar7 = (undefined4 *)FUN_00679d22();
            local_68 = *(int *)(unaff_EBP + -0x10);
            iStack_74 = *puVar7;
            iStack_6c = *(undefined4 *)(unaff_EBP + -0x38);
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            uStack_70 = *(undefined4 *)(unaff_EBP + -0x20);
            iStack_78 = unaff_EBP + -0x24;
            uStack_7c = 0x45d915;
            FUN_00434e21();
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            local_68 = 0x45d924;
            FUN_00414ebb();
            local_68 = 0;
            iStack_74 = unaff_EBP + -0x4c;
            *(undefined4 **)(unaff_EBP + -0x38) = &uStack_70;
            iStack_78 = 0x45d935;
            uStack_70 = extraout_ECX_00;
            iStack_6c = extraout_ECX_00;
            FUN_0045e0ed();
            iStack_74 = unaff_EBP + -0x14;
            iStack_78 = 2;
            *(undefined4 **)(unaff_EBP + -0x44) = &uStack_7c;
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            uStack_7c = extraout_ECX_01;
            FUN_00450368(unaff_EBP + -0x24);
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            iVar4 = FUN_004592e2();
            if (iVar4 == 1) {
              local_68 = 0;
              iStack_6c = 0;
              uStack_70 = 0xc6;
              iStack_74 = 0x45d972;
              FUN_0060142b();
              iVar4 = *(int *)(unaff_EBP + -0x18) / 100;
              *(undefined1 *)(unaff_EBP + -4) = 0xe;
              if (iVar4 == 0x2b78) {
                if (2 < *(int *)(unaff_EBP + -0x18) % 10) {
                  iVar3 = *(int *)(unaff_EBP + -0x28);
                  goto LAB_0045d9a5;
                }
                iVar3 = *(int *)(unaff_EBP + -0x28);
                iVar4 = 0x21;
              }
              else {
LAB_0045d9a5:
                if ((iVar4 == 0x2b70) && (*(int *)(unaff_EBP + -0x18) != 0x10f7c0)) {
                  local_68 = 0x1b;
                  iVar4 = local_68;
                }
                else {
                  iVar4 = 4;
                  if (*(int *)(unaff_EBP + -0x18) / 10000 == 0x38e) {
                    local_68 = 0x1d;
                    iVar4 = local_68;
                  }
                }
              }
              iStack_6c = 0x45d9d8;
              local_68 = iVar4;
              FUN_00457cda();
              local_68 = *(int *)(unaff_EBP + -0x40);
              iStack_6c = 0x45d9e3;
              FUN_00457d37();
              if ((iVar4 != 4) && (iVar4 != 0x1d)) {
                local_68 = *(int *)(unaff_EBP + -0x14);
                iStack_6c = 0x45d9f8;
                FUN_00457d37();
              }
              local_68 = *(int *)(unaff_EBP + -0x2c);
              iStack_6c = 0x45da03;
              FUN_00457d37();
              iStack_6c = unaff_EBP + -0x10;
              *(int **)(unaff_EBP + -0x44) = &local_68;
              local_68 = 0;
              uStack_70 = 0x45da14;
              FUN_00414f8b();
              iStack_6c = 0x45da1c;
              FUN_00459cb5();
              iStack_6c = unaff_EBP + -0x30;
              *(int **)(unaff_EBP + -0x44) = &local_68;
              local_68 = 0;
              uStack_70 = 0x45da2d;
              FUN_00414f8b();
              iStack_6c = 0x45da35;
              FUN_00459cb5();
              local_68 = unaff_EBP + -100;
              iStack_6c = 0x45da44;
              FUN_004751b2();
              *(undefined4 *)(iVar3 + 0x18) = 1;
              *(undefined1 *)(unaff_EBP + -4) = 0xb;
              local_68 = 0x45da57;
              FUN_0045ebca();
            }
            *(undefined1 *)(unaff_EBP + -4) = 9;
            local_68 = 0x45da63;
            FUN_00414ebb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 6;
          local_68 = 0x45da6f;
          FUN_0045e742();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        local_68 = 0x45da7b;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        local_68 = 0x45da87;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x48) != 0) {
          local_68 = 0;
          iStack_6c = 0x45da98;
          FUN_0045e794();
          *(undefined4 *)(unaff_EBP + -0x48) = 0;
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      local_68 = 0x45daa7;
      FUN_00414ebb();
      goto LAB_0045daeb;
    }
  }
LAB_0045daa9:
  local_68 = 0;
  iStack_6c = 0;
  uStack_70 = 0;
  iStack_74 = 0;
  *(int **)(unaff_EBP + -0x44) = &iStack_78;
  uStack_7c = 0x25c;
  FUN_00679d22(&iStack_78);
  uStack_7c = 0x45dac8;
  FUN_007db3ad();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_68 = 0x45dad6;
  FUN_0045e46f();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    local_68 = *(int *)(unaff_EBP + -0x10) + -0xc;
    iStack_6c = 0x45daea;
    FUN_00434e38();
  }
LAB_0045daeb:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


