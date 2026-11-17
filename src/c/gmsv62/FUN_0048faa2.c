/* FUN_0048faa2 - 0x0048faa2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0048faa2(void)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar2;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_1c;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x9c) = *(undefined4 *)(*(int *)(extraout_ECX + 0xa0) + 0x500);
  local_1c = unaff_EBP + -0x10;
  FUN_0045c16f(*(undefined4 *)(*(int *)(extraout_ECX + 0xa0) + 0x500),unaff_EBP + -0x14);
  iVar2 = *(int *)(*(int *)(extraout_ECX + 0xa0) + 0x500);
  if (iVar2 == 10) {
    local_1c = -1;
    uVar4 = 0xffffffff;
    uVar3 = 0xff439adc;
  }
  else {
    local_1c = *(int *)(&DAT_00964c54 + iVar2 * 0xc);
    uVar4 = *(undefined4 *)(&DAT_00964c50 + iVar2 * 0xc);
    uVar3 = *(undefined4 *)(&DAT_00964c4c + iVar2 * 0xc);
  }
  FUN_004ae221(uVar3,uVar4);
  local_1c = 1;
  FUN_004ae18f(0,0x14,0);
  local_1c = 0x48fb38;
  thunk_FUN_004aea12();
  iVar2 = *(int *)(*(int *)(extraout_ECX + 0xa0) + 0x500);
  if (iVar2 == 10) {
    local_1c = 1;
    FUN_004ae18f(1,0x14,0);
    *(int **)(unaff_EBP + -0x18) = &local_1c;
    local_1c = extraout_ECX_00;
    FUN_00679d22(&local_1c,0x11d9);
LAB_0048fc44:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar4 = 0;
    FUN_00495c22(0);
    FUN_004ae1d9(uVar4);
  }
  else {
    if (iVar2 == 9) {
      local_1c = 0;
      FUN_004ae18f(1,0x14,0);
      *(int **)(unaff_EBP + -0x18) = &local_1c;
      local_1c = extraout_ECX_01;
      FUN_00679d22(&local_1c,0x23f);
      goto LAB_0048fc44;
    }
    if (*(int *)(unaff_EBP + -0x14) == -1) {
      if (iVar2 == 8) goto LAB_0048fc60;
      local_1c = 0;
      FUN_004ae18f(1,0x14,0);
      if (*(int *)(extraout_ECX + 0x9c) == 1) {
        *(int **)(unaff_EBP + -0x18) = &local_1c;
        local_1c = 0;
        FUN_00414edd(s_Recommended_Items_00964d14,0xffffffff);
      }
      else {
        *(int **)(unaff_EBP + -0x18) = &local_1c;
        local_1c = extraout_ECX_02;
        FUN_00679d22(&local_1c,0x241);
      }
      goto LAB_0048fc44;
    }
    local_1c = 1;
    FUN_004ae18f(*(undefined4 *)(unaff_EBP + -0x10),0x14,0);
    iVar2 = 0;
    if (0 < *(int *)(unaff_EBP + -0x10)) {
      do {
        local_1c = *(int *)(unaff_EBP + -0x14) + iVar2;
        iVar1 = FUN_00495f58();
        *(int **)(unaff_EBP + -0x18) = &local_1c;
        local_1c = 0;
        FUN_00414f8b(iVar1 + 8);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar1 = iVar2;
        FUN_00495c22(iVar2);
        FUN_004ae1d9(iVar1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(unaff_EBP + -0x10));
    }
  }
  local_1c = 0x48fc60;
  thunk_FUN_004aea12();
LAB_0048fc60:
  local_1c = 0;
  FUN_008161f1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


