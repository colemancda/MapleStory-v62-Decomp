/* FUN_00845864 - 0x00845864 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00845864(void)

{
  char cVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int iVar9;
  int unaff_EBP;
  int iVar10;
  int iStack_64;
  int local_60;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  local_60 = 0x845881;
  cVar1 = FUN_0042452b();
  if (cVar1 != '\0') {
    *(undefined4 *)(extraout_ECX + 0x208c) = 0;
    local_60 = 0x845895;
    uVar4 = FUN_007d1e08();
    *(undefined4 *)(extraout_ECX + 0x2090) = uVar4;
  }
  local_60 = unaff_EBP + -0x4c;
  iStack_64 = 0x8458a6;
  iVar5 = FUN_00455c59();
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar5 + 4);
  local_60 = 0x8458b4;
  FUN_0045e4a2();
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_60 = 0x8458c5;
  uVar6 = FUN_0042452b();
  if ((uVar6 & 0xff) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = uVar6 & 0xff;
    do {
      local_60 = 0x8458db;
      cVar1 = FUN_0042452b();
      local_60 = 0x8458e6;
      cVar2 = FUN_0042452b();
      iVar10 = (int)cVar2;
      *(int *)(unaff_EBP + -0x20) = iVar10;
      local_60 = 0x8458f4;
      sVar3 = FUN_00424561();
      iVar9 = (int)sVar3;
      *(int *)(unaff_EBP + -0x1c) = iVar9;
      iVar5 = DAT_00978358;
      if (cVar1 == '\0') {
        local_60 = *(undefined4 *)(unaff_EBP + 8);
        iStack_64 = unaff_EBP + -0x4c;
        FUN_004b57d7();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        local_60 = 0x845bdf;
        local_60 = FUN_0045e2eb();
        iStack_64 = 0x845be8;
        uVar4 = FUN_0084c94e();
        local_60 = *(undefined4 *)(unaff_EBP + -0x48);
        *(int **)(unaff_EBP + -0x34) = &iStack_64;
        if (*(int *)(unaff_EBP + -0x48) != 0) {
          InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + -0x48) + 4));
        }
        FUN_00464816(iVar10,iVar9);
        iStack_64 = 0x845c1e;
        local_60 = uVar4;
        iStack_64 = FUN_0045e2eb();
        FUN_00845cde();
        local_60 = 1;
        iStack_64 = 0x845c34;
        iStack_64 = FUN_0045e2eb();
        FUN_00834236();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        local_60 = 0x845c49;
        FUN_0046575e();
      }
      else if (cVar1 == '\x01') {
        local_60 = 0x845b64;
        sVar3 = FUN_00424561();
        local_60 = *(undefined4 *)(unaff_EBP + -0x1c);
        iStack_64 = iVar10;
        iVar5 = FUN_00458c4f(unaff_EBP + -0x5c);
        piVar7 = *(int **)(iVar5 + 4);
        local_60 = 0x845b82;
        FUN_0046575e();
        local_60 = 0x845b8c;
        local_60 = FUN_0045e2eb();
        iStack_64 = 0x845b95;
        uVar4 = FUN_0084c94e();
        *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
        iStack_64 = 0x845ba0;
        local_60 = (int)sVar3;
        (**(code **)(*piVar7 + 0x1c))();
        local_60 = 1;
        iStack_64 = 0x845ba9;
        iStack_64 = FUN_0045e2eb();
        FUN_00834236();
        local_60 = *(undefined4 *)(unaff_EBP + -0x30);
        iStack_64 = 0x845bbc;
        iStack_64 = FUN_0045e2eb();
LAB_00845a14:
        FUN_00845cde();
      }
      else if (cVar1 == '\x02') {
        local_60 = 0x845a29;
        sVar3 = FUN_00424561();
        local_60 = (int)sVar3;
        *(int *)(unaff_EBP + -0x30) = local_60;
        if ((iVar10 == 1) && ((iVar9 < 0 || (local_60 < 0)))) {
          *(undefined4 *)(unaff_EBP + -0x28) = 1;
        }
        iStack_64 = iVar10;
        FUN_00458c4f(unaff_EBP + -0x44);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_64 = iVar10;
        local_60 = iVar9;
        FUN_00458c4f(unaff_EBP + -0x3c);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (*(int *)(unaff_EBP + -0x40) != 0) {
          local_60 = 0x845a74;
          uVar4 = FUN_0045e2eb();
          local_60 = 0xffffffff;
          iStack_64 = 0x845a80;
          puVar8 = (undefined4 *)FUN_0045f1e3();
          *puVar8 = uVar4;
        }
        if (*(int *)(unaff_EBP + -0x38) != 0) {
          local_60 = 0x845a91;
          uVar4 = FUN_0045e2eb();
          local_60 = 0xffffffff;
          iStack_64 = 0x845a9d;
          puVar8 = (undefined4 *)FUN_0045f1e3();
          *puVar8 = uVar4;
        }
        local_60 = *(undefined4 *)(unaff_EBP + -0x40);
        *(int **)(unaff_EBP + -0x34) = &iStack_64;
        if (*(int *)(unaff_EBP + -0x40) != 0) {
          InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + -0x40) + 4));
        }
        FUN_00464816(iVar10,iVar9);
        local_60 = *(undefined4 *)(unaff_EBP + -0x38);
        *(int **)(unaff_EBP + -0x34) = &iStack_64;
        iStack_64 = extraout_ECX_04;
        if (*(int *)(unaff_EBP + -0x38) != 0) {
          InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + -0x38) + 4));
        }
        FUN_00464816(iVar10,*(undefined4 *)(unaff_EBP + -0x30));
        if (*(int *)(unaff_EBP + -0x40) != 0) {
          local_60 = 1;
          iStack_64 = 0x845b04;
          iStack_64 = FUN_0045e2eb();
          FUN_00834236();
        }
        if (*(int *)(unaff_EBP + -0x38) != 0) {
          local_60 = 1;
          iStack_64 = 0x845b1e;
          iStack_64 = FUN_0045e2eb();
          FUN_00834236();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int *)(unaff_EBP + -0x38) != 0) {
          local_60 = 0;
          iStack_64 = 0x845b39;
          FUN_00449913();
          *(undefined4 *)(unaff_EBP + -0x38) = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x40) != 0) {
          local_60 = 0;
          iStack_64 = 0x845b53;
          FUN_00449913();
          *(undefined4 *)(unaff_EBP + -0x40) = 0;
        }
      }
      else if (cVar1 == '\x03') {
        iStack_64 = iVar10;
        local_60 = iVar9;
        iVar9 = FUN_00458c4f(unaff_EBP + -0x54);
        iVar9 = *(int *)(iVar9 + 4);
        if (*(int *)(unaff_EBP + -0x50) != 0) {
          local_60 = 0;
          iStack_64 = 0x84593f;
          FUN_00449913();
          *(undefined4 *)(unaff_EBP + -0x50) = 0;
        }
        local_60 = 0x84594c;
        local_60 = FUN_0045e2eb();
        iStack_64 = 0x845955;
        uVar4 = FUN_0084c94e();
        *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
        local_60 = 0x84595f;
        uVar4 = FUN_0045e2eb();
        *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
        local_60 = extraout_ECX_00;
        if (iVar5 != 0) {
          local_60 = *(int *)(iVar5 + 0x1ef8);
          iStack_64 = iVar5 + 0x1ef0;
          iVar10 = FUN_004cd670();
          if ((iVar10 != 0) && (iVar9 != 0)) {
            local_60 = *(undefined4 *)(iVar5 + 0x2410);
            iStack_64 = iVar5 + 0x2408;
            iVar5 = FUN_00413367();
            local_60 = 0x84599f;
            iVar10 = FUN_0045e2eb();
            local_60 = extraout_ECX_01;
            if (iVar5 == iVar10) {
              local_60 = 0x8459aa;
              local_60 = FUN_0045e2eb();
              iStack_64 = *(int *)(unaff_EBP + -0x20);
              iVar5 = FUN_004b8476();
              local_60 = extraout_ECX_02;
              if (iVar5 == 1) {
                local_60 = 0;
                iStack_64 = 0x8459c5;
                FUN_0083a6ec();
                local_60 = extraout_ECX_03;
              }
            }
          }
        }
        if ((*(int *)(unaff_EBP + -0x20) == 1) && (*(int *)(unaff_EBP + -0x1c) < 0)) {
          *(undefined4 *)(unaff_EBP + -0x28) = 1;
        }
        iStack_64 = local_60;
        if (iVar9 != 0) {
          local_60 = 0xffffffff;
          iStack_64 = 0x8459e4;
          piVar7 = (int *)FUN_0045f1e3();
          iStack_64 = *(int *)(unaff_EBP + -0x24);
          *piVar7 = iStack_64;
        }
        local_60 = 0;
        *(int **)(unaff_EBP + -0x34) = &iStack_64;
        FUN_00464816(*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c));
        local_60 = 1;
        iStack_64 = *(int *)(unaff_EBP + -0x24);
        FUN_00834236();
        local_60 = *(undefined4 *)(unaff_EBP + -0x30);
        iStack_64 = *(int *)(unaff_EBP + -0x24);
        goto LAB_00845a14;
      }
      piVar7 = (int *)(unaff_EBP + -0x2c);
      *piVar7 = *piVar7 + -1;
    } while (*piVar7 != 0);
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      local_60 = 0x845c66;
      local_60 = FUN_0042452b();
      iStack_64 = 0x845c6e;
      FUN_007b029d();
      for (uVar6 = 0;
          (iVar5 = *(int *)(unaff_EBP + -0x18), iVar5 != 0 && (uVar6 < *(uint *)(iVar5 + -4)));
          uVar6 = uVar6 + 1) {
        local_60 = 1;
        iStack_64 = *(int *)(iVar5 + uVar6 * 4);
        FUN_008341aa();
      }
      local_60 = 0x845c94;
      FUN_008344dd();
    }
  }
  local_60 = 0x845c9c;
  FUN_00833dbd();
  if (DAT_0097951c != 0) {
    local_60 = 0x845cab;
    FUN_00766652();
    local_60 = 0x845cb6;
    FUN_0076679b();
    local_60 = 0x845cc1;
    FUN_00766673();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_60 = 0x845ccd;
  FUN_00445a30();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


