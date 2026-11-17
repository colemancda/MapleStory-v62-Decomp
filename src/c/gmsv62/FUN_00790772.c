/* FUN_00790772 - 0x00790772 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00790772(void)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int unaff_EBP;
  int *piVar8;
  int *piStack_48;
  undefined4 uStack_44;
  undefined **ppuStack_40;
  undefined4 *puStack_3c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar4 = extraout_ECX[0x149];
  *(int **)(unaff_EBP + -0x1c) = extraout_ECX;
  if (iVar4 != 0) goto LAB_00790b04;
  puStack_3c = (undefined4 *)0x7907a2;
  cVar1 = FUN_0042452b();
  *(int *)(unaff_EBP + -0x14) = (int)cVar1;
  puStack_3c = (undefined4 *)0x7907af;
  bVar2 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x20) = (uint)bVar2;
  puStack_3c = (undefined4 *)0x7907bd;
  uVar3 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x18) = uVar3 & 0xff;
  puStack_3c = (undefined4 *)0x7907ca;
  uVar3 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x24) = uVar3 & 0xff;
  puStack_3c = (undefined4 *)0x7907d7;
  iVar4 = (**(code **)(*extraout_ECX + 8))();
  piVar8 = extraout_ECX;
  if (iVar4 != 0) {
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          puStack_3c = (undefined4 *)0x194;
          ppuStack_40 = (undefined **)(unaff_EBP + -0x2c);
          uStack_44 = 0x790876;
          puStack_3c = (undefined4 *)FUN_00679d22();
          uVar7 = 2;
          *(undefined4 *)(unaff_EBP + -0x10) = 2;
          goto LAB_0079087c;
        }
        puStack_3c = (undefined4 *)0x193;
        ppuStack_40 = (undefined **)(unaff_EBP + -0x28);
        uStack_44 = 0x79088d;
        puStack_3c = (undefined4 *)FUN_00679d22();
        *(undefined4 *)(unaff_EBP + -0x10) = 4;
        *(undefined4 *)(unaff_EBP + -4) = 3;
      }
      else {
        puStack_3c = (undefined4 *)0x192;
        ppuStack_40 = (undefined **)(unaff_EBP + -0x30);
        uStack_44 = 0x790858;
        puStack_3c = (undefined4 *)FUN_00679d22();
        uVar7 = 1;
        *(undefined4 *)(unaff_EBP + -0x10) = 1;
LAB_0079087c:
        *(undefined4 *)(unaff_EBP + -4) = uVar7;
      }
      *(undefined4 *)(unaff_EBP + 8) = 0;
      ppuStack_40 = (undefined **)0x7908a8;
      FUN_00414f8b();
      *(undefined4 *)(unaff_EBP + -4) = 7;
      if ((*(byte *)(unaff_EBP + -0x10) & 4) != 0) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
        puStack_3c = (undefined4 *)0x7908c1;
        FUN_00414ebb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 6;
      if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
        puStack_3c = (undefined4 *)0x7908da;
        FUN_00414ebb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 5;
      if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
        puStack_3c = (undefined4 *)0x7908f3;
        FUN_00414ebb();
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        if (*(int *)(unaff_EBP + -0x20) == 0) {
          if (*(int *)(unaff_EBP + -0x24) == 0) {
            puStack_3c = (undefined4 *)0x193;
            ppuStack_40 = (undefined **)(unaff_EBP + -0x24);
            uStack_44 = 0x7909c1;
            puStack_3c = (undefined4 *)FUN_00679d22();
            *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x40;
            *(undefined4 *)(unaff_EBP + -4) = 0xc;
          }
          else {
            puStack_3c = (undefined4 *)0xf37;
            ppuStack_40 = (undefined **)(unaff_EBP + -0x20);
            uStack_44 = 0x7909ab;
            puStack_3c = (undefined4 *)FUN_00679d22();
            *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x20;
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
          }
          ppuStack_40 = (undefined **)0x7909d5;
          FUN_00414f8b();
          *(undefined4 *)(unaff_EBP + -4) = 0xb;
          if ((*(byte *)(unaff_EBP + -0x10) & 0x40) != 0) {
            *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffbf;
            puStack_3c = (undefined4 *)0x7909ee;
            FUN_00414ebb();
          }
          *(undefined4 *)(unaff_EBP + -4) = 5;
          if ((*(byte *)(unaff_EBP + -0x10) & 0x20) == 0) goto LAB_00790a07;
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffdf;
        }
        else {
          puStack_3c = (undefined4 *)0x194;
          ppuStack_40 = (undefined **)(unaff_EBP + -0x24);
          uStack_44 = 0x790980;
          puStack_3c = (undefined4 *)FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 10;
          ppuStack_40 = (undefined **)0x79098d;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 5;
        }
LAB_00790a02:
        puStack_3c = (undefined4 *)0x790a07;
        FUN_00414ebb();
      }
      else {
        if (*(int *)(unaff_EBP + -0x24) == 0) {
          puStack_3c = (undefined4 *)0x192;
          ppuStack_40 = (undefined **)(unaff_EBP + -0x24);
          uStack_44 = 0x790926;
          puStack_3c = (undefined4 *)FUN_00679d22();
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x10;
          *(undefined4 *)(unaff_EBP + -4) = 9;
        }
        else {
          puStack_3c = (undefined4 *)0xf38;
          ppuStack_40 = (undefined **)(unaff_EBP + -0x20);
          uStack_44 = 0x790912;
          puStack_3c = (undefined4 *)FUN_00679d22();
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 8;
          *(undefined1 *)(unaff_EBP + -4) = 8;
        }
        ppuStack_40 = (undefined **)0x79093a;
        FUN_00414f8b();
        *(undefined4 *)(unaff_EBP + -4) = 8;
        if ((*(byte *)(unaff_EBP + -0x10) & 0x10) != 0) {
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffef;
          puStack_3c = (undefined4 *)0x79094f;
          FUN_00414ebb();
        }
        *(undefined4 *)(unaff_EBP + -4) = 5;
        if ((*(byte *)(unaff_EBP + -0x10) & 8) != 0) {
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
          goto LAB_00790a02;
        }
      }
LAB_00790a07:
      ppuStack_40 = (undefined **)(unaff_EBP + 8);
      puStack_3c = (undefined4 *)0xc;
      uStack_44 = 0x790a12;
      FUN_00471102();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      puStack_3c = (undefined4 *)0x790a20;
      FUN_00414ebb();
      piVar8 = *(int **)(unaff_EBP + -0x1c);
    }
    else {
      if (DAT_00979178 == 0) {
LAB_0079080c:
        iVar4 = 0;
      }
      else {
        puStack_3c = &DAT_0097bcf4;
        ppuStack_40 = (undefined **)0x790800;
        iVar5 = (**(code **)(*(int *)(DAT_00979178 + 4) + 0x48))();
        iVar4 = DAT_00979178;
        if (iVar5 == 0) goto LAB_0079080c;
      }
      if (iVar4 == 0) {
        *(undefined4 *)(unaff_EBP + -0x38) = 0x21000003;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
        puStack_3c = (undefined4 *)&DAT_00903698;
        ppuStack_40 = (undefined **)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
        uStack_44 = 0x79082e;
        __CxxThrowException_8();
      }
      ppuStack_40 = *(undefined ***)(unaff_EBP + -0x14);
      uStack_44 = 0x790837;
      puStack_3c = (undefined4 *)(uint)bVar2;
      FUN_006aacde();
    }
  }
  puStack_3c = (undefined4 *)0x790a2a;
  iVar4 = (**(code **)(*piVar8 + 8))();
  if ((iVar4 == 0) || (*(int *)(unaff_EBP + -0x18) == 0)) {
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        puStack_3c = (undefined4 *)0x4e3;
        ppuStack_40 = (undefined **)(unaff_EBP + -0x34);
        uStack_44 = 0x790a79;
        puVar6 = (undefined4 *)FUN_00679d86();
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x100;
        *(undefined4 *)(unaff_EBP + -4) = 0xe;
      }
      else {
        puStack_3c = (undefined4 *)0x4e2;
        ppuStack_40 = (undefined **)(unaff_EBP + -0x38);
        uStack_44 = 0x790a60;
        puVar6 = (undefined4 *)FUN_00679d86();
        *(byte *)(unaff_EBP + -0x10) = *(byte *)(unaff_EBP + -0x10) | 0x80;
        *(undefined4 *)(unaff_EBP + -4) = 0xd;
      }
      ppuStack_40 = (undefined **)*puVar6;
      puStack_3c = (undefined4 *)0x64;
      uStack_44 = 0x790a8d;
      FUN_007d4073();
      *(undefined4 *)(unaff_EBP + -4) = 0xd;
      if ((*(uint *)(unaff_EBP + -0x10) & 0x100) != 0) {
        *(byte *)(unaff_EBP + -0xf) = *(byte *)(unaff_EBP + -0xf) & 0xfe;
        puStack_3c = (undefined4 *)0x790aa3;
        FUN_00402676();
        puStack_3c = (undefined4 *)extraout_ECX_00;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if ((*(byte *)(unaff_EBP + -0x10) & 0x80) != 0) {
        puStack_3c = (undefined4 *)0x790ab5;
        FUN_00402676();
        puStack_3c = (undefined4 *)extraout_ECX_01;
      }
      piVar8 = *(int **)(unaff_EBP + -0x1c);
    }
    else {
      ppuStack_40 = &PTR_LAB_006e0042_3_0096bed4;
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        ppuStack_40 = &PTR_LAB_006e0042_3_0096bea8;
      }
      puStack_3c = (undefined4 *)0x64;
      uStack_44 = 0x790b2d;
      FUN_007d4073();
    }
    piStack_48 = piVar8 + 0x34f;
    ppuStack_40 = *(undefined ***)(unaff_EBP + -0x14);
    *(undefined4 **)(unaff_EBP + 8) = &uStack_44;
    uStack_44 = puStack_3c;
    puStack_3c = (undefined4 *)*(undefined4 *)(unaff_EBP + -0x18);
    FUN_0041160e();
    *(int ***)(unaff_EBP + -0x30) = &piStack_48;
    *(undefined4 *)(unaff_EBP + -4) = 0xf;
    FUN_00486ada(&piStack_48);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00424e27();
    uVar7 = FUN_0043210d();
    FUN_00424e82(uVar7);
    FUN_0042cf11(uVar7);
  }
LAB_00790b04:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


