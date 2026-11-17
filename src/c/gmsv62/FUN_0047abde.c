/* FUN_0047abde - 0x0047abde in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047abde(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *_Str1;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int extraout_ECX;
  char *_Str2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  iVar3 = *(int *)(extraout_ECX + 0x98);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x20,0xc03);
    uVar2 = *puVar1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0047c713(unaff_EBP + -0x14,0,uVar2,&DAT_00978474);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + -0x20) + -0xc);
    }
    if ((*(char **)(unaff_EBP + -0x14) == (char *)0x0) || (**(char **)(unaff_EBP + -0x14) == '\0'))
    {
      FUN_00414f8b(unaff_EBP + 8);
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined1 *)(unaff_EBP + -0xe) = 0x5c;
      *(undefined1 *)(unaff_EBP + -0xd) = 0;
      FUN_00414edd(unaff_EBP + -0xe,0xffffffff);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_0045e08c(unaff_EBP + -0x24,1);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uVar2 = FUN_0045ec92(unaff_EBP + -0x18);
      *(undefined4 *)(unaff_EBP + -0x28) = uVar2;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0x24) + -0xc);
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0x18) + -0xc);
      }
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + -4);
        }
        uVar2 = FUN_0045e070(unaff_EBP + -0x28,iVar3 + -1);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        FUN_00414f8b(uVar2);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (*(int *)(unaff_EBP + -0x28) != 0) {
          FUN_00434e38(*(int *)(unaff_EBP + -0x28) + -0xc);
        }
      }
      _Str2 = *(char **)(unaff_EBP + 8);
      if (*(char **)(unaff_EBP + 8) == (char *)0x0) {
        _Str2 = DAT_00980dfc;
      }
      _Str1 = DAT_00980dfc;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        _Str1 = *(char **)(unaff_EBP + -0x14);
      }
      iVar3 = _strcmp(_Str1,_Str2);
      if (iVar3 != 0) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        FUN_00414f8b(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        piVar4 = (int *)FUN_00679d22(unaff_EBP + -0x28,0xc04);
        iVar3 = *piVar4;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (iVar3 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(iVar3 + -4);
        }
        FUN_0045efbb(iVar3,uVar2);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_00414ebb();
        uVar5 = (*DAT_0097b444)(*(undefined4 *)(unaff_EBP + -0x10));
        if ((uVar5 == 0xffffffff) || ((uVar5 & 0x10) != 0)) {
          FUN_00414f8b(unaff_EBP + 8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00414ebb();
      }
    }
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x28,0xc03);
    uVar2 = *puVar1;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_0047c7cc(0,uVar2,*(undefined4 *)(unaff_EBP + -0x14));
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


