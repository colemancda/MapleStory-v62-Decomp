/* FUN_00569f18 - 0x00569f18 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00569f18(void)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  int local_48;
  
  FUN_00879bb8();
  local_48 = 0x569f32;
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') {
    local_48 = 0;
    FUN_0060142b(0xb,0);
    local_48 = unaff_EBP + -0x44;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004751b2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_48 = 0x56a248;
    FUN_0045ebca();
    goto LAB_0056a248;
  }
  if (cVar1 == '\x01') {
    local_48 = extraout_ECX + 0x1ac;
    iVar2 = FUN_0058770c();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    local_48 = 0;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_0060142b(10,0);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar2 < 0) {
      local_48 = 0;
      FUN_00457cda();
      local_48 = 1;
      FUN_0058ae08();
    }
    else {
      local_48 = 1;
      FUN_00457cda();
      local_48 = 0xbb5;
      FUN_00679d22(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      local_48 = iVar2;
      uVar3 = FUN_00449713();
      uVar3 = FUN_00434e21(unaff_EBP + -0x10,uVar3);
      *(int **)(unaff_EBP + 8) = &local_48;
      local_48 = 0;
      FUN_00414f8b(uVar3);
      FUN_00459cb5();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      local_48 = 0x56a1f8;
      FUN_00414ebb();
    }
    local_48 = unaff_EBP + -0x44;
    FUN_004751b2();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_48 = 0x56a212;
    FUN_0045ebca();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        uVar3 = 0xf;
      }
      else {
        if (cVar1 == '\x04') {
          local_48 = 4;
          *(undefined4 *)(unaff_EBP + 8) = 0;
          *(undefined4 *)(unaff_EBP + -4) = 7;
          do {
            iVar2 = local_48;
            local_48 = unaff_EBP + -0x14;
            iVar2 = FUN_00587560(extraout_ECX + 0x1ac,iVar2);
            local_48 = 5;
          } while (iVar2 == -3);
          local_48 = 0;
          FUN_0060142b(9,0);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          local_48 = iVar2;
          FUN_00457cda();
          if (iVar2 == 0) {
            local_48 = 1;
            FUN_0058ae08();
          }
          else {
            local_48 = 0;
            FUN_00457cda();
            local_48 = *(int *)(DAT_00978368 + 0x2028);
            FUN_00457d37();
            local_48 = 0xbb5;
            FUN_00679d22(unaff_EBP + -0x18);
            local_48 = *(int *)(unaff_EBP + -0x14);
            *(undefined1 *)(unaff_EBP + -4) = 9;
            uVar3 = FUN_00449713();
            uVar3 = FUN_00434e21(unaff_EBP + 8,uVar3);
            *(int **)(unaff_EBP + -0x1c) = &local_48;
            local_48 = 0;
            FUN_00414f8b(uVar3);
            FUN_00459cb5();
            *(undefined1 *)(unaff_EBP + -4) = 8;
            local_48 = 0x56a047;
            FUN_00414ebb();
          }
          local_48 = unaff_EBP + -0x34;
          FUN_004751b2();
          *(undefined1 *)(unaff_EBP + -4) = 7;
          local_48 = 0x56a062;
          FUN_0045ebca();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          goto LAB_0056a069;
        }
        if (cVar1 != '\a') goto LAB_0056a248;
        local_48 = 0;
        FUN_005697ac(0);
        local_48 = 1;
        FUN_0058ae08();
        uVar3 = 0x11;
      }
      local_48 = 0;
      FUN_0057a546(uVar3);
      goto LAB_0056a248;
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    do {
      local_48 = unaff_EBP + -0x1c;
      iVar2 = FUN_00587560(extraout_ECX + 0x1ac,5);
    } while (iVar2 == -3);
    local_48 = 0;
    FUN_0060142b(9,0);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    local_48 = iVar2;
    FUN_00457cda();
    if (iVar2 == 0) {
      local_48 = 1;
      FUN_0058ae08();
    }
    else {
      local_48 = 0;
      FUN_00457cda();
      local_48 = *(int *)(DAT_00978368 + 0x2028);
      FUN_00457d37();
      local_48 = 0xbb5;
      FUN_00679d22(unaff_EBP + -0x20);
      local_48 = *(int *)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      uVar3 = FUN_00449713();
      uVar3 = FUN_00434e21(unaff_EBP + -0x10,uVar3);
      *(int **)(unaff_EBP + 8) = &local_48;
      local_48 = 0;
      FUN_00414f8b(uVar3);
      FUN_00459cb5();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      local_48 = 0x56a138;
      FUN_00414ebb();
    }
    local_48 = unaff_EBP + -0x44;
    FUN_004751b2();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    local_48 = 0x56a153;
    FUN_0045ebca();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
LAB_0056a069:
  local_48 = 0x56a06e;
  FUN_00414ebb();
LAB_0056a248:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


