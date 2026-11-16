/* FUN_50c0f7f7 - 0x50c0f7f7 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c0f7f7(void *this,wchar_t *param_1,int *param_2)

{
  wchar_t wVar1;
  ushort uVar2;
  uint uVar3;
  wchar_t *pwVar4;
  int *piVar5;
  int *piVar6;
  ushort *puVar7;
  undefined4 uVar8;
  int *piVar9;
  ushort *puVar10;
  int iVar11;
  undefined1 local_28 [16];
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  FUN_50c05e35();
  piVar6 = (int *)((int)this + 0x20);
  FUN_50c04b87(piVar6,(int *)&local_8);
  FUN_50c02a72(&local_8);
  local_c = (int *)0x0;
  FUN_50c04b87((int *)((int)this + 0x40),(int *)&local_c);
  local_18 = (int *)((int)this + 0x38);
  FUN_50c04b87(local_18,(int *)((int)this + 0x40));
  piVar9 = (int *)((int)this + 0x34);
  local_8 = piVar9;
  FUN_50c04b87(piVar9,local_18);
  local_14 = (int *)((int)this + 0x30);
  FUN_50c04b87(local_14,piVar9);
  local_10 = (int *)((int)this + 0x2c);
  FUN_50c04b87(local_10,local_14);
  piVar9 = (int *)((int)this + 0x28);
  FUN_50c04b87(piVar9,local_10);
  FUN_50c04b87((void *)((int)this + 0x24),piVar9);
  FUN_50c02a72(&local_c);
  *(undefined4 *)((int)this + 0x3c) = 0;
  if (((int *)*piVar6 == (int *)0x0) || (iVar11 = *(int *)*piVar6, iVar11 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar11 + -4) >> 1;
  }
  if (uVar3 != 0) {
    if ((undefined4 *)*piVar6 == (undefined4 *)0x0) {
      pwVar4 = (wchar_t *)0x0;
      param_1 = pwVar4;
    }
    else {
      pwVar4 = *(wchar_t **)*piVar6;
      param_1 = pwVar4;
    }
    for (; (((wVar1 = *pwVar4, 0x60 < (ushort)wVar1 && ((ushort)wVar1 < 0x7b)) ||
            ((0x40 < (ushort)wVar1 && ((ushort)wVar1 < 0x5b)))) ||
           ((0x2f < (ushort)wVar1 && ((ushort)wVar1 < 0x3a)))); pwVar4 = pwVar4 + 1) {
    }
    if ((*pwVar4 == L':') && (param_1 + 1 != pwVar4)) {
      piVar5 = (int *)FUN_50c0fb36(&local_c,(int *)&param_1,pwVar4,3);
      FUN_50c04b87((void *)((int)this + 0x24),piVar5);
      if (local_c != (int *)0x0) {
        FUN_50c02a85(local_c);
      }
      param_1 = param_1 + 1;
    }
    FUN_50c0f770(param_1);
    if ((*param_1 == L'/') && (param_1[1] == L'/')) {
      param_1 = param_1 + 2;
      piVar6 = (int *)FUN_50c0fb36(&local_c,(int *)&param_1,(short *)&DAT_50c18598,2);
      FUN_50c04b87(piVar9,piVar6);
      if (local_c != (int *)0x0) {
        FUN_50c02a85(local_c);
      }
      param_1 = param_1 + 1;
      if ((*(int **)((int)this + 0x24) == (int *)0x0) ||
         (iVar11 = **(int **)((int)this + 0x24), iVar11 == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(iVar11 + -4) >> 1;
      }
      if (uVar3 != 0) {
        FUN_50c04bec((int *)((int)this + 0x24));
        FUN_50c02a72(local_8);
        *local_8 = *(int *)((int)this + 0x24);
        FUN_50c10078(local_8,(wchar_t *)&DAT_50c185a8);
      }
      FUN_50c10078(local_8,param_1);
      if ((undefined4 *)*piVar9 == (undefined4 *)0x0) {
        puVar10 = (ushort *)0x0;
      }
      else {
        puVar10 = *(ushort **)*piVar9;
      }
      for (; (*puVar10 != 0 && (*puVar10 != 0x3a)); puVar10 = puVar10 + 1) {
      }
      puVar7 = puVar10;
      if (*puVar10 != 0) {
        while( true ) {
          uVar2 = puVar7[1];
          if (uVar2 == 0) break;
          if ((uVar2 < 0x30) || (0x39 < uVar2)) {
            FUN_50c061b4(local_28,0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(local_28,(ThrowInfo *)&DAT_50c14eb0);
          }
          *(uint *)((int)this + 0x3c) = (uVar2 - 0x30) + *(int *)((int)this + 0x3c) * 10;
          puVar7 = puVar7 + 1;
        }
        if ((int *)*piVar9 == (int *)0x0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)*piVar9;
        }
        if ((undefined4 *)*piVar9 == (undefined4 *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined4 *)*piVar9;
        }
        FUN_50c02a35(uVar8,(int)puVar10 - iVar11 >> 1);
        FUN_50c05e8d();
        FUN_50c04bec((int *)&local_c);
        FUN_50c02a72(piVar9);
        *piVar9 = (int)local_c;
        if (local_c != (int *)0x0) {
          FUN_50c02a85(local_c);
        }
      }
    }
    else {
      FUN_50c04bec(piVar6);
      piVar9 = local_8;
      FUN_50c02a72(local_8);
      *piVar9 = *piVar6;
    }
    piVar9 = (int *)FUN_50c0fb36(&local_c,(int *)&param_1,(short *)&DAT_50c185a0,2);
    piVar6 = local_10;
    FUN_50c04b87(local_10,piVar9);
    if (local_c != (int *)0x0) {
      FUN_50c02a85(local_c);
    }
    if (*param_1 == L'#') {
      param_1 = param_1 + 1;
      piVar9 = (int *)FUN_50c0fb36(&local_10,(int *)&param_1,(short *)&DAT_50c1859c,2);
      FUN_50c04b87(local_14,piVar9);
      if (local_10 != (int *)0x0) {
        FUN_50c02a85(local_10);
      }
    }
    if ((undefined4 *)*piVar6 == (undefined4 *)0x0) {
      puVar10 = (ushort *)0x0;
    }
    else {
      puVar10 = *(ushort **)*piVar6;
    }
    iVar11 = FUN_50c0f7ba(puVar10);
    piVar6 = param_2;
    if (iVar11 == 0) {
      FUN_50c04bec(param_2);
      piVar9 = local_18;
      FUN_50c02a72(local_18);
      *piVar9 = *piVar6;
    }
  }
  return;
}


