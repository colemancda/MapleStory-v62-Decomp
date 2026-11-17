/* FUN_00473a03 - 0x00473a03 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00473a03(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int extraout_ECX;
  int unaff_EBP;
  int iVar7;
  uint uVar8;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(extraout_ECX + 4) = *(undefined4 *)(DAT_00973cd8 + 4);
  FUN_00475a36();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 1;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  FUN_00827f55(unaff_EBP + -0x14,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00827f55(unaff_EBP + -0x10,1);
  pcVar1 = *(char **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if ((((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) ||
      (pcVar2 = *(char **)(unaff_EBP + -0x10), pcVar2 == (char *)0x0)) || (*pcVar2 == '\0')) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    iVar4 = DAT_0096837c;
    iVar7 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (0 < iVar4) {
      do {
        piVar5 = (int *)FUN_0045f1e3(0xffffffff);
        *piVar5 = iVar7;
        iVar7 = iVar7 + 1;
      } while (iVar7 < DAT_0096837c);
    }
    iVar4 = 0;
    if (0 < DAT_0096837c) {
      do {
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(*(int *)(unaff_EBP + -0x18) + -4);
        }
        uVar6 = _rand();
        iVar7 = *(int *)(*(int *)(unaff_EBP + -0x18) + (uVar6 % uVar8) * 4);
        FUN_00475dc9(*(int *)(unaff_EBP + -0x18) + (uVar6 % uVar8) * 4);
        FUN_00475dfd();
        FUN_00473ba0(&DAT_009795d0 + iVar7 * 0x10);
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_0096837c);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00445a30();
  }
  else {
    uVar3 = FUN_0087b6ab(pcVar2);
    iVar4 = FUN_00473bd1(pcVar1,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00475dfd();
    FUN_00473c31(*(undefined2 *)(iVar4 + 2),*(undefined4 *)(iVar4 + 4));
    *(undefined1 *)(unaff_EBP + -4) = 2;
  }
  FUN_00473c5a(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x48) = &PTR_FUN_008e96d8;
  FUN_00475e3b();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


