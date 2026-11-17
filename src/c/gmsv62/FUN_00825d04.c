/* FUN_00825d04 - 0x00825d04 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x00825e40) */
/* WARNING: Removing unreachable block (ram,0x00825db7) */
/* WARNING: Removing unreachable block (ram,0x00825f23) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00825d04(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined *puVar6;
  
  FUN_00879bb8();
  DAT_00973cd8 = -(uint)(extraout_ECX + 1 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  extraout_ECX[1] = 0;
  extraout_ECX[2] = 0;
  extraout_ECX[4] = 0;
  extraout_ECX[6] = 0;
  extraout_ECX[7] = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[8] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[9] = 0;
  extraout_ECX[10] = 1;
  extraout_ECX[0xb] = 0;
  extraout_ECX[0xc] = 0;
  extraout_ECX[0xd] = 0;
  extraout_ECX[0xe] = 0;
  *extraout_ECX = &PTR_FUN_008f2ee8;
  FUN_00414edd(*(undefined4 *)(unaff_EBP + 8),0xffffffff);
  puVar6 = &DAT_0096c5cc;
  FUN_0045ed72(&DAT_0096c5cc);
  FUN_0045ee27(puVar6);
  piVar2 = (int *)FUN_00827f55(unaff_EBP + 8,0);
  pcVar5 = (char *)*piVar2;
  if ((char *)*piVar2 == (char *)0x0) {
    pcVar5 = DAT_00980dfc;
  }
  iVar3 = _strcmp(pcVar5,s_WebStart_0096c5c0);
  *(uint *)(unaff_EBP + -0x10) = (uint)(iVar3 == 0);
  FUN_00414ebb();
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piVar2 = (int *)FUN_00827f55(unaff_EBP + 8,0);
    pcVar5 = (char *)*piVar2;
    if ((char *)*piVar2 == (char *)0x0) {
      pcVar5 = DAT_00980dfc;
    }
    iVar3 = _strcmp(pcVar5,s_GameLaunching_0096c5a8);
    *(uint *)(unaff_EBP + -0x10) = (uint)(iVar3 == 0);
    FUN_00414ebb();
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      uVar4 = FUN_0045e053(unaff_EBP + 8,0xd,0xffffffff);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00414f8b(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      extraout_ECX[9] = 2;
    }
  }
  else {
    uVar4 = FUN_0045e053(unaff_EBP + 8,8,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414f8b(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    puVar6 = &DAT_0096c5cc;
    FUN_0045ed72(&DAT_0096c5cc);
    FUN_0045ee27(puVar6);
    extraout_ECX[9] = 1;
    piVar2 = (int *)FUN_00827f55(unaff_EBP + 8,0);
    pcVar5 = (char *)*piVar2;
    if ((char *)*piVar2 == (char *)0x0) {
      pcVar5 = DAT_00980dfc;
    }
    iVar3 = _strcmp(pcVar5,s_token_0096c5b8);
    *(uint *)(unaff_EBP + -0x10) = (uint)(iVar3 == 0);
    FUN_00414ebb();
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      uVar4 = FUN_0045e053(unaff_EBP + -0x10,5,0xffffffff);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00414f8b(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      puVar6 = &DAT_0096c5cc;
      FUN_0045ed72(&DAT_0096c5cc);
      FUN_0045ee27(puVar6);
      FUN_00827f55(unaff_EBP + 8,0);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_0082ffca(*(undefined4 *)(unaff_EBP + 8));
      if (*(int *)(unaff_EBP + 8) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + 8) + -4);
      }
      uVar4 = FUN_0045e053(unaff_EBP + -0x10,uVar4,0xffffffff);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00414f8b(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
    }
  }
  puVar6 = &DAT_0096c5cc;
  FUN_0045ed72(&DAT_0096c5cc);
  FUN_0045ee27(puVar6);
  extraout_ECX[9] = 2;
  uVar4 = (*DAT_0097b3ac)();
  extraout_ECX[3] = uVar4;
  *(undefined4 *)(unaff_EBP + -0xa8) = 0x94;
  (*DAT_0097b4dc)(unaff_EBP + -0xa8);
  uVar1 = *(uint *)(unaff_EBP + -0xa4);
  extraout_ECX[5] = (uint)(*(int *)(unaff_EBP + -0x98) == 1);
  if ((5 < uVar1) && (extraout_ECX[9] == 0)) {
    extraout_ECX[9] = 2;
  }
  if (*(uint *)(unaff_EBP + -0xa4) < 5) {
    _DAT_0096c5a4 = 0x7cc;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


