/* FUN_0075fa3f - 0x0075fa3f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0075fa3f(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *_Str1;
  int iVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  char *_Str2;
  int *piVar7;
  int unaff_EBP;
  uint uVar8;
  
  FUN_00879bb8();
  iVar5 = *(int *)(extraout_ECX + 0x9c);
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  iVar5 = *(int *)(*(int *)(DAT_00978358 + 0x1744) + 4 + iVar5 * 8);
  uVar8 = 0;
  if (iVar5 != 0) {
    piVar1 = (int *)(iVar5 + 0x7c);
    if ((*piVar1 == 0) || (*(uint *)(*piVar1 + -4) < 10)) {
      FUN_0045a1d8(unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 8));
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + 8) == 0x7fffffff) {
        uVar4 = FUN_00679d22(unaff_EBP + -0x10,0xe6a);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00414f8b(uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          FUN_00434e38(*(int *)(unaff_EBP + -0x10) + -0xc);
        }
      }
      uVar4 = 0;
      FUN_0045ed72(0);
      FUN_0045ee27(uVar4);
      while( true ) {
        iVar5 = *piVar1;
        if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= uVar8)) goto LAB_0075fbac;
        FUN_0045a1d8(unaff_EBP + -0x10,*(undefined4 *)(iVar5 + uVar8 * 4));
        iVar5 = *(int *)(*piVar1 + uVar8 * 4);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (iVar5 == 0x7fffffff) {
          uVar4 = FUN_00679d22(unaff_EBP + -0x18,0xe6a);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          FUN_00414f8b(uVar4);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          FUN_00414ebb();
        }
        uVar4 = 0;
        FUN_0045ed72(0);
        FUN_0045ee27(uVar4);
        _Str2 = *(char **)(unaff_EBP + -0x14);
        if (*(char **)(unaff_EBP + -0x14) == (char *)0x0) {
          _Str2 = DAT_00980dfc;
        }
        _Str1 = DAT_00980dfc;
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          _Str1 = *(char **)(unaff_EBP + -0x10);
        }
        iVar5 = _strcmp(_Str1,_Str2);
        if (0 < iVar5) break;
        iVar5 = FUN_0045ec92(unaff_EBP + -0x14);
        if (iVar5 != 0) {
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_00414ebb();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00414ebb();
          goto LAB_0075fbd9;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        uVar8 = uVar8 + 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
LAB_0075fbac:
      puVar6 = (undefined4 *)FUN_0045f1e3(uVar8);
      *puVar6 = *(undefined4 *)(unaff_EBP + 8);
      if (*piVar1 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*piVar1 + -4);
      }
      iVar2 = *(int *)(unaff_EBP + -0x1c);
      FUN_004ad003(iVar5 + -5);
      if ((int)uVar8 <= *(int *)(iVar2 + 0x98)) {
        *(int *)(iVar2 + 0x98) = *(int *)(iVar2 + 0x98) + 1;
      }
      piVar3 = (int *)*piVar1;
      if ((piVar3 != (int *)0x0) && (piVar3[-1] == 10)) {
        piVar7 = piVar3;
        for (uVar8 = 0; (piVar3 != (int *)0x0 && (uVar8 < 10)); uVar8 = uVar8 + 1) {
          if (*piVar7 == 0x7fffffff) goto LAB_0075fc49;
          piVar7 = piVar7 + 1;
        }
        (**(code **)(*(int *)(*(int *)(iVar2 + 0x70) + 4) + 0x1c))(0);
      }
LAB_0075fc49:
      FUN_008161f1(0);
      FUN_006168e2(piVar1);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      uVar4 = 1;
      goto LAB_0075fbdb;
    }
  }
LAB_0075fbd9:
  uVar4 = 0;
LAB_0075fbdb:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


