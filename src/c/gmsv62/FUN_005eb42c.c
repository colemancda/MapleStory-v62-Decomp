/* FUN_005eb42c - 0x005eb42c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005eb42c(void)

{
  short *psVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  uint uVar6;
  int iVar7;
  undefined4 extraout_ECX_00;
  int *piVar8;
  int unaff_EBP;
  int iVar9;
  undefined4 local_78;
  short *psStack_74;
  int iStack_70;
  int *local_68;
  
  FUN_00879bb8();
  local_68 = (int *)0x5eb446;
  cVar2 = FUN_0042452b();
  iVar9 = (int)cVar2;
  local_68 = (int *)0x5eb451;
  cVar2 = FUN_0042452b();
  piVar8 = (int *)(int)cVar2;
  if (iVar9 == -1) {
    if ((((piVar8 != (int *)0xffffffff) && (-1 < (int)piVar8)) &&
        (iVar9 = *(int *)(*(int *)(extraout_ECX + 0x98) + 0x5c), iVar9 != 0)) &&
       (piVar8 < *(int **)(iVar9 + -4))) {
      local_68 = piVar8;
      local_68 = (int *)FUN_005ee883();
      local_68 = (int *)*local_68;
      *(int ***)(unaff_EBP + -0x24) = &local_68;
      if (local_68 != (int *)0x0) {
        iStack_70 = 0x5eb7f8;
        InterlockedIncrement(local_68 + 2);
      }
      FUN_005ead58();
    }
  }
  else if (-1 < iVar9) {
    iVar4 = *(int *)(extraout_ECX + 0x98);
    uVar6 = 0;
    if (*(int *)(iVar4 + 0x60) != 0) {
      uVar6 = *(uint *)(*(int *)(iVar4 + 0x60) + -4);
    }
    if (iVar9 - 2U < uVar6) {
      *(undefined4 *)(extraout_ECX + 0xb0) = 0;
      *(int *)(extraout_ECX + 0xa0) = iVar9;
      iVar7 = 0;
      if (*(int *)(iVar4 + 0x60) != 0) {
        iVar7 = *(int *)(*(int *)(iVar4 + 0x60) + -4);
      }
      if ((uint)(iVar7 - *(int *)(iVar4 + 100)) <= iVar9 - 2U) {
        *(undefined4 *)(extraout_ECX + 0xb0) = 1;
      }
      local_68 = (int *)0x5eb4af;
      FUN_005ea930();
      if (((-1 < (int)piVar8) &&
          (iVar4 = *(int *)(*(int *)(*(int *)(extraout_ECX + 0x98) + 0x60) + -0xc + iVar9 * 8),
          iVar4 != 0)) && (piVar8 < *(int **)(iVar4 + -4))) {
        iStack_70 = 0x5eb4d7;
        local_68 = piVar8;
        FUN_004172e3();
        FUN_005ee883();
        *(int ***)(unaff_EBP + -0x20) = &local_68;
        iStack_70 = 0x5eb4ed;
        FUN_0040810c();
        FUN_005ead58();
      }
      if (*(int *)(extraout_ECX + 0xb0) != 0) {
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        local_68 = (int *)0x3ad;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iStack_70 = 0x5eb523;
        FUN_00679d86();
        local_68 = (int *)**(undefined4 **)(extraout_ECX + 0x98);
        iStack_70 = unaff_EBP + -0x1c;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        psStack_74 = (short *)0x5eb53b;
        FUN_0041354c();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          local_68 = (int *)(*(int *)(unaff_EBP + -0x18) + -0xc);
          FUN_00403384();
        }
        local_68 = &DAT_00980690;
        FUN_00403191();
        local_68 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00403191();
        local_68 = (int *)0x0;
        iStack_70 = unaff_EBP + -0x44;
        psStack_74 = (short *)(unaff_EBP + -0x34);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        local_78 = 0x5eb586;
        uVar3 = FUN_00411641();
        *(undefined4 **)(unaff_EBP + -0x18) = &local_78;
        local_78 = extraout_ECX_00;
        FUN_004033a1(uVar3);
        iVar4 = unaff_EBP + -0x54;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00405a1d(iVar4);
        FUN_00402660();
        FUN_00404a02(iVar4);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iStack_70 = 0x5eb5b8;
        iVar4 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x20) = iVar4;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        if (iVar4 != 0) {
          local_68 = (int *)(unaff_EBP + -0x20);
          local_68 = (int *)FUN_00404b30();
          if (((int)local_68 < 0) && (local_68 != (int *)0x80004002)) {
            FUN_00878dfb();
          }
        }
        local_68 = (int *)(unaff_EBP + -0x54);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        local_68 = (int *)FUN_00402bc3();
        if ((int)local_68 < 0) {
          FUN_00878dfb();
        }
        local_68 = (int *)(unaff_EBP + -0x34);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        local_68 = (int *)FUN_00402bc3();
        if ((int)local_68 < 0) {
          FUN_00878dfb();
        }
        local_68 = (int *)(unaff_EBP + -0x44);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        local_68 = (int *)FUN_00402bc3();
        if ((int)local_68 < 0) {
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          local_68 = (int *)(iVar9 + -2);
          puVar5 = (undefined4 *)FUN_004172e3();
          local_68 = (int *)*puVar5;
          *(int ***)(unaff_EBP + -0x24) = &local_68;
          FUN_00408b49();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          iStack_70 = 0x5eb661;
          FUN_0040263d();
          iStack_70 = 0x5eb668;
          local_68 = (int *)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iStack_70 = 0x5eb676;
          local_68 = (int *)FUN_00412348();
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          local_68 = (int *)FUN_0041a425();
          if (((int)local_68 < 0) && (local_68 != (int *)0x80004002)) {
            FUN_00878dfb();
          }
          local_68 = *(int **)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          if (local_68 != (int *)0x0) {
            (**(code **)(*local_68 + 8))();
          }
          local_68 = (int *)(unaff_EBP + -100);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          local_68 = (int *)FUN_00402bc3();
          if ((int)local_68 < 0) {
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            local_68 = (int *)&DAT_0097812c;
            psStack_74 = (short *)&stack0xffffff94;
            *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffff94;
            iStack_70 = 0x674;
            local_78 = 0x5eb6e3;
            FUN_00679e4e();
            iStack_70 = unaff_EBP + -100;
            *(undefined1 *)(unaff_EBP + -4) = 8;
            psStack_74 = (short *)0x5eb6f3;
            FUN_0040263d();
            psStack_74 = (short *)0x5eb6fa;
            FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            iStack_70 = 0x5eb704;
            FUN_004343c5();
            local_68 = (int *)0xffffffff;
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
            iStack_70 = 0x5eb714;
            FUN_004184ca();
            local_68 = (int *)(unaff_EBP + -100);
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            local_68 = (int *)FUN_00402bc3();
            if ((int)local_68 < 0) {
              FUN_00878dfb();
            }
            psVar1 = *(short **)(unaff_EBP + -0x18);
            if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
              iVar9 = *(int *)(extraout_ECX + 0x80);
              local_68 = (int *)0x0;
              iStack_70 = (*(int *)((-(uint)(iVar9 != 0) & iVar9 - 0xcU) + 0x128) * 3000 -
                          *(int *)((-(uint)(iVar9 != 0) & iVar9 - 0xcU) + 300)) * 10 + -0x3fff8ada;
              local_78 = 0x5eb781;
              psStack_74 = psVar1;
              FUN_0042bcc5();
            }
            *(undefined1 *)(unaff_EBP + -4) = 8;
            local_68 = (int *)0x5eb78d;
            FUN_00402676();
          }
        }
        local_68 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (local_68 != (int *)0x0) {
          (**(code **)(*local_68 + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        local_68 = (int *)0x5eb7aa;
        FUN_00402676();
        local_68 = *(int **)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (local_68 != (int *)0x0) {
          (**(code **)(*local_68 + 8))();
        }
      }
    }
  }
  if (*(int *)(*(int *)(extraout_ECX + 0x98) + 0xc) != 0) {
    local_68 = *(int **)(unaff_EBP + 8);
    FUN_005e4f36();
  }
  *(undefined4 *)(extraout_ECX + 0x88) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


