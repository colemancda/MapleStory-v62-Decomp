/* FUN_51812473 - 0x51812473 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_51812473(void)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  void *_Buf1;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  uVar3 = *(uint *)(unaff_EBP + 8);
  puVar1 = (undefined4 *)(uVar3 + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  FUN_518017b5();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    piVar2 = (int *)(uVar3 + 0x20);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_51813012(unaff_EBP + -0x18);
    }
    iVar4 = -0x7fffbffd;
    goto LAB_518125fc;
  }
  if (*(int *)(uVar3 + 0x34) != 0) {
    piVar2 = (int *)(uVar3 + 0x20);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_51813012(unaff_EBP + -0x18);
    }
    iVar4 = -0x7ffbfddc;
    goto LAB_518125fc;
  }
  iVar4 = *(int *)(uVar3 + 0x40);
  *(uint *)(unaff_EBP + 8) = uVar3 + 0x40;
  if (iVar4 != 0) {
    piVar2 = (int *)(uVar3 + 0x20);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_51813012(unaff_EBP + -0x18);
    }
    iVar4 = -0x7ffbfdfc;
    goto LAB_518125fc;
  }
  FUN_5181022b((void *)(unaff_EBP + -0x18),uVar3 + 0x2c);
  piVar2 = (int *)(uVar3 + 0x20);
  *piVar2 = *piVar2 + -1;
  iVar4 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (iVar4 == 0) {
    *puVar1 = 0;
  }
  if (*(int *)(unaff_EBP + 0x10) == 0) {
LAB_518125ad:
    piVar2 = *(int **)(unaff_EBP + 0xc);
    iVar4 = (**(code **)(*piVar2 + 0x10))
                      (piVar2,-(uint)(uVar3 != 4) & uVar3,*(undefined4 *)(unaff_EBP + -0x14));
    if (iVar4 < 0) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_51813012(unaff_EBP + -0x18);
      }
    }
    else {
      FUN_51804af0(*(int **)(unaff_EBP + 8),piVar2);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_51813012(unaff_EBP + -0x18);
      }
      iVar4 = 0;
    }
  }
  else {
    iVar4 = memcmp(*(void **)(unaff_EBP + 0x10),&DAT_51819cf0,0x10);
    if ((iVar4 == 0) ||
       (iVar4 = memcmp(*(void **)(unaff_EBP + 0x10),*(void **)(unaff_EBP + -0x14),0x10), iVar4 == 0)
       ) {
      _Buf1 = (void *)(*(int *)(unaff_EBP + 0x10) + 0x10);
      *(void **)(unaff_EBP + 0x10) = _Buf1;
      iVar4 = memcmp(_Buf1,&DAT_51819cf0,0x10);
      if ((iVar4 == 0) ||
         (iVar4 = memcmp(*(void **)(unaff_EBP + 0x10),(void *)(*(int *)(unaff_EBP + -0x14) + 0x10),
                         0x10), iVar4 == 0)) goto LAB_518125ad;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_51813012(unaff_EBP + -0x18);
    }
    iVar4 = -0x7ffbfdd6;
  }
LAB_518125fc:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


