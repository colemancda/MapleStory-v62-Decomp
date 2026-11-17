/* FUN_00506a91 - 0x00506a91 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00506a91(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int unaff_EBP;
  bool bVar8;
  int local_28;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) != 0) {
    local_28 = 0x506ab4;
    uVar3 = FUN_0042452b();
    uVar3 = uVar3 & 0xff;
    local_28 = 0x506abf;
    uVar4 = FUN_0042452b();
    uVar4 = uVar4 & 0xff;
    local_28 = unaff_EBP + 8;
    FUN_0045cdbc();
    bVar8 = DAT_00979274 != 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (bVar8) {
      *(int **)(unaff_EBP + 0xc) = &local_28;
      local_28 = 0;
      FUN_00414f8b(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00507326(uVar3,uVar4);
      FUN_006f2c51(uVar3,uVar4);
      iVar1 = DAT_00978368;
      if (*(int *)(DAT_00978368 + 0x2098) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(DAT_00978368 + 0x2098) + 4;
      }
      local_28 = -1;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      FUN_00414edd(iVar5);
      local_28 = unaff_EBP + 8;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar5 = FUN_0045ec92();
      if (iVar5 != 0) {
        *(undefined4 *)(iVar1 + 0x208c) = 0;
        local_28 = 0x506b5d;
        uVar6 = FUN_007d1e08();
        *(undefined4 *)(iVar1 + 0x2090) = uVar6;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        local_28 = *(int *)(unaff_EBP + -0x10) + -0xc;
        FUN_00434e38();
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + 8) != 0) {
      local_28 = *(int *)(unaff_EBP + 8) + -0xc;
      FUN_00434e38();
    }
    goto LAB_00506cdb;
  }
  local_28 = 0x506b85;
  cVar2 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if (cVar2 == '\x01') {
    local_28 = 0xfab;
    piVar7 = (int *)FUN_00679d22(unaff_EBP + -0x24);
    local_28 = *piVar7;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00434e21(unaff_EBP + 0xc);
    local_28 = *(int *)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 3;
LAB_00506c92:
    if (local_28 != 0) {
      local_28 = local_28 + -0xc;
      FUN_00434e38();
    }
    if ((*(char **)(unaff_EBP + 0xc) != (char *)0x0) && (**(char **)(unaff_EBP + 0xc) != '\0')) {
      local_28 = 7;
      FUN_00471102(unaff_EBP + 0xc);
    }
  }
  else {
    if (cVar2 == '\x02') {
      local_28 = 0xfac;
      piVar7 = (int *)FUN_00679d22(unaff_EBP + -0x20);
      local_28 = *piVar7;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00434e21(unaff_EBP + 0xc);
      local_28 = *(int *)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      goto LAB_00506c92;
    }
    if (cVar2 == '\x03') {
      local_28 = 0xfad;
      piVar7 = (int *)FUN_00679d22(unaff_EBP + -0x1c);
      local_28 = *piVar7;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00434e21(unaff_EBP + 0xc);
      local_28 = *(int *)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      goto LAB_00506c92;
    }
    if (cVar2 == '\x04') {
      local_28 = 0xfae;
      piVar7 = (int *)FUN_00679d22(unaff_EBP + -0x18);
      local_28 = *piVar7;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00434e21(unaff_EBP + 0xc);
      local_28 = *(int *)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      goto LAB_00506c92;
    }
    if (cVar2 == '\x05') {
      local_28 = 0xfaf;
      piVar7 = (int *)FUN_00679d22(unaff_EBP + -0x14);
      local_28 = *piVar7;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_00434e21(unaff_EBP + 0xc);
      local_28 = *(int *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      goto LAB_00506c92;
    }
  }
  iVar1 = DAT_00978368;
  *(undefined4 *)(DAT_00978368 + 0x208c) = 0;
  local_28 = 0x506cc9;
  uVar6 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x2090) = uVar6;
  local_28 = 0x506cdb;
  FUN_00414ebb();
LAB_00506cdb:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


