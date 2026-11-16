/* FUN_5180bf93 - 0x5180bf93 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_5180bf93(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  size_t _Size;
  int extraout_ECX;
  int unaff_EBP;
  void *_Dst;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_5180ea30();
  uVar1 = *(uint *)(*(int *)(extraout_ECX + 100) + 0x14);
  iVar2 = *(int *)(*(int *)(extraout_ECX + 100) + 0x18);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffb4;
  *(int *)(unaff_EBP + -0x2c) = extraout_ECX;
  if (iVar2 == 0) {
    if (*(int *)(extraout_ECX + 0x78) == -1) {
      *(uint *)(unaff_EBP + -0x18) = uVar1;
LAB_5180c03a:
      iVar2 = (**(code **)(**(int **)(extraout_ECX + 0x68) + 0x2c))
                        (*(int **)(extraout_ECX + 0x68),*(undefined4 *)(extraout_ECX + 0x7c),
                         *(undefined4 *)(unaff_EBP + -0x18),unaff_EBP + -0x24,unaff_EBP + -0x20,
                         unaff_EBP + -0x14,unaff_EBP + -0x1c,0);
      if (iVar2 < 0) {
        if (iVar2 != -0x7787ff6a) {
          FUN_51802c9b((void *)(unaff_EBP + -0x4c),iVar2,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + -0x4c),(ThrowInfo *)&DAT_5181a2e0);
        }
        *(undefined4 *)(extraout_ECX + 0x74) = 1;
        uVar3 = 0;
        goto LAB_5180c06e;
      }
      iVar2 = **(int **)(extraout_ECX + 0x70);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uVar4 = (**(code **)(iVar2 + 8))
                        (*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                         *(undefined4 *)(unaff_EBP + 0xc));
      if (uVar4 < *(uint *)(unaff_EBP + -0x20)) {
        uVar5 = *(int *)(extraout_ECX + 0x7c) + uVar4;
        *(uint *)(extraout_ECX + 0x78) = uVar5;
        if (uVar1 <= uVar5) {
          uVar5 = uVar5 - uVar1;
LAB_5180c0e1:
          *(uint *)(extraout_ECX + 0x78) = uVar5;
        }
      }
      else if (*(int *)(unaff_EBP + -0x14) != 0) {
        uVar5 = (**(code **)(**(int **)(extraout_ECX + 0x70) + 8))
                          (*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x1c),
                           *(undefined4 *)(unaff_EBP + 0xc));
        uVar4 = uVar4 + uVar5;
        if (uVar5 < *(uint *)(unaff_EBP + -0x1c)) goto LAB_5180c0e1;
      }
      if (*(int *)(*(int *)(extraout_ECX + 100) + 0x18) == 0) {
        *(uint *)(extraout_ECX + 0x78) = uVar4;
      }
      else {
        *(int *)(extraout_ECX + 0x7c) = *(int *)(extraout_ECX + 0x7c) + uVar4;
        *(int *)(extraout_ECX + 0x88) = *(int *)(extraout_ECX + 0x88) + uVar4;
        if (uVar1 <= *(uint *)(extraout_ECX + 0x7c)) {
          *(uint *)(extraout_ECX + 0x7c) = *(uint *)(extraout_ECX + 0x7c) - uVar1;
        }
        uVar1 = *(uint *)(unaff_EBP + -0x20);
        iVar2 = (-(uint)(*(short *)(*(int *)(extraout_ECX + 100) + 0x34) != 8) & 0xffffff80) + 0x80;
        if (uVar4 < uVar1) {
          memset((void *)(uVar4 + *(int *)(unaff_EBP + -0x24)),iVar2,uVar1 - uVar4);
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            _Size = *(size_t *)(unaff_EBP + -0x1c);
            _Dst = *(void **)(unaff_EBP + -0x14);
LAB_5180c15b:
            memset(_Dst,iVar2,_Size);
          }
        }
        else if (uVar4 < *(uint *)(unaff_EBP + -0x18)) {
          _Size = *(uint *)(unaff_EBP + -0x18) - uVar4;
          _Dst = (void *)((uVar4 - uVar1) + *(int *)(unaff_EBP + -0x14));
          goto LAB_5180c15b;
        }
      }
      (**(code **)(**(int **)(extraout_ECX + 0x68) + 0x4c))
                (*(int **)(extraout_ECX + 0x68),*(undefined4 *)(unaff_EBP + -0x24),
                 *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x14),
                 *(undefined4 *)(unaff_EBP + -0x1c));
    }
  }
  else {
    iVar2 = (**(code **)(**(int **)(extraout_ECX + 0x68) + 0x10))
                      (*(int **)(extraout_ECX + 0x68),unaff_EBP + -0x28,0);
    if (iVar2 < 0) {
      FUN_51802c9b((void *)(unaff_EBP + -0x3c),iVar2,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x3c),(ThrowInfo *)&DAT_5181a2e0);
    }
    uVar4 = (*(int *)(unaff_EBP + -0x28) - *(int *)(extraout_ECX + 0x7c)) + uVar1;
    *(uint *)(unaff_EBP + -0x18) = uVar4;
    if (*(int *)(unaff_EBP + 8) == 0) {
      if (uVar1 <= uVar4) {
        do {
          uVar4 = uVar4 - uVar1;
        } while (uVar1 <= uVar4);
        goto LAB_5180c01a;
      }
    }
    else if (uVar1 < uVar4) {
      do {
        uVar4 = uVar4 - uVar1;
      } while (uVar1 < uVar4);
LAB_5180c01a:
      *(uint *)(unaff_EBP + -0x18) = uVar4;
    }
    if (uVar4 != 0) {
      uVar5 = *(uint *)(*(int *)(extraout_ECX + 100) + 0x18);
      if (*(int *)(extraout_ECX + 0x78) == -1) {
        uVar5 = uVar5 * 2;
      }
      if (uVar5 < uVar4) {
        *(uint *)(unaff_EBP + -0x18) = uVar5;
      }
      goto LAB_5180c03a;
    }
  }
  uVar3 = 1;
LAB_5180c06e:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar3;
}


