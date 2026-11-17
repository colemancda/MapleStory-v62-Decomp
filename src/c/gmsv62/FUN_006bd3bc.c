/* FUN_006bd3bc - 0x006bd3bc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006bd3bc(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iVar6;
  int local_24;
  
  FUN_00879bb8();
  local_24 = 0x6bd3d9;
  FUN_006bde4d();
  local_24 = 0x6bd3e6;
  FUN_006bdc80();
  local_24 = 0x6bd3f0;
  cVar2 = FUN_0042452b();
  if (cVar2 != '\0') {
    local_24 = 0x28;
    iVar3 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar3 == 0) {
      local_24 = 0;
    }
    else {
      local_24 = 0x6bd419;
      local_24 = FUN_006bd68a();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_006bdbc4();
    iVar3 = *(int *)(extraout_ECX + 0x594);
    local_24 = 0x6bd436;
    uVar4 = FUN_0042459a();
    *(undefined4 *)(iVar3 + 0xc) = uVar4;
    iVar3 = *(int *)(extraout_ECX + 0x594);
    local_24 = 0x6bd446;
    uVar4 = FUN_0042459a();
    *(undefined4 *)(iVar3 + 0x14) = uVar4;
    local_24 = unaff_EBP + -0x10;
    local_24 = FUN_0045cdbc();
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00414f8b();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      local_24 = *(int *)(unaff_EBP + -0x10) + -0xc;
      FUN_00434e38();
    }
    local_24 = 8;
    FUN_004245d2(*(int *)(extraout_ECX + 0x594) + 0x18);
    iVar3 = *(int *)(extraout_ECX + 0x594);
    local_24 = 0x6bd49f;
    uVar4 = FUN_0042459a();
    *(undefined4 *)(iVar3 + 0x24) = uVar4;
    iVar3 = *(int *)(extraout_ECX + 0x594);
    local_24 = 0x6bd4af;
    uVar4 = FUN_0042459a();
    *(undefined4 *)(iVar3 + 0x20) = uVar4;
  }
  local_24 = 0x6bd4b9;
  iVar3 = FUN_0042459a();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  if (0 < iVar3) {
    local_24 = 0x6bd4cb;
    iVar3 = FUN_0042459a();
    if (0 < iVar3) {
      *(int *)(unaff_EBP + 8) = iVar3;
      do {
        local_24 = 0x28;
        iVar3 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x18) = iVar3;
        *(undefined4 *)(unaff_EBP + -4) = 2;
        if (iVar3 == 0) {
          uVar4 = 0;
        }
        else {
          local_24 = 0x6bd4f7;
          uVar4 = FUN_006bd68a();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
        local_24 = 0x6bd50a;
        FUN_006bdc6e();
        iVar3 = *(int *)(unaff_EBP + -0x1c);
        *(undefined4 *)(unaff_EBP + -4) = 3;
        local_24 = 0x6bd51b;
        uVar4 = FUN_0042459a();
        *(undefined4 *)(iVar3 + 0xc) = uVar4;
        iVar3 = *(int *)(unaff_EBP + -0x1c);
        local_24 = 0x6bd528;
        uVar4 = FUN_0042459a();
        *(undefined4 *)(iVar3 + 0x14) = uVar4;
        local_24 = unaff_EBP + -0x10;
        local_24 = FUN_0045cdbc();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          local_24 = *(int *)(unaff_EBP + -0x10) + -0xc;
          FUN_00434e38();
        }
        local_24 = 8;
        FUN_004245d2(*(int *)(unaff_EBP + -0x1c) + 0x18);
        iVar3 = *(int *)(unaff_EBP + -0x1c);
        local_24 = 0x6bd575;
        uVar4 = FUN_0042459a();
        *(undefined4 *)(iVar3 + 0x24) = uVar4;
        iVar3 = *(int *)(unaff_EBP + -0x1c);
        local_24 = 0x6bd582;
        uVar4 = FUN_0042459a();
        *(undefined4 *)(iVar3 + 0x20) = uVar4;
        local_24 = -1;
        FUN_006bdb93(unaff_EBP + -0x20);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        local_24 = 0x6bd5a2;
        FUN_006bdc80();
        piVar1 = (int *)(unaff_EBP + 8);
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
    }
  }
  local_24 = 1;
  iVar6 = (*(int *)(unaff_EBP + -0x14) + -1) / 10 + 1;
  FUN_004ae18f(iVar6,10,1);
  iVar3 = 0;
  if (0 < iVar6) {
    do {
      *(undefined4 *)(unaff_EBP + 8) = 0;
      local_24 = 0x3bc;
      *(undefined4 *)(unaff_EBP + -4) = 5;
      puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14);
      uVar4 = *puVar5;
      local_24 = iVar3 + 1;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      *(int *)(unaff_EBP + -0x10) = local_24;
      FUN_00434e21(unaff_EBP + 8,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      local_24 = 0x6bd618;
      FUN_00414ebb();
      local_24 = 0;
      *(int **)(unaff_EBP + -0x18) = &local_24;
      FUN_00414f8b(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00495c22(iVar3);
      FUN_004ae1d9(iVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      local_24 = 0x6bd64d;
      FUN_00414ebb();
      iVar3 = *(int *)(unaff_EBP + -0x10);
    } while (iVar3 < iVar6);
  }
  local_24 = 0x6bd65f;
  thunk_FUN_004aea12();
  local_24 = *(int *)(extraout_ECX + 0x588);
  FUN_004ae16e();
  local_24 = 0;
  FUN_008161f1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


