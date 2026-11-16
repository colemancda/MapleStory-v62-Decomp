/* FUN_5181234d - 0x5181234d in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_5181234d(void)

{
  undefined2 *_Dst;
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int unaff_EBP;
  void *_Src;
  
  FUN_5180ea30();
  _Dst = *(undefined2 **)(unaff_EBP + 0xc);
  if (_Dst == (undefined2 *)0x0) {
    uVar4 = 0x80004003;
  }
  else {
    iVar1 = *(int *)(unaff_EBP + 8);
    *(undefined4 **)(unaff_EBP + 0xc) = (undefined4 *)(iVar1 + 0x20);
    FUN_518017b5();
    uVar4 = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(_Dst + 0x80) = uVar4;
    piVar2 = *(int **)(iVar1 + 0x3c);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    if ((*(int **)(iVar1 + 0x40) == (int *)0x0) || (iVar3 = **(int **)(iVar1 + 0x40), iVar3 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(iVar3 + -4) >> 1;
    }
    if (uVar5 == 0) {
      *_Dst = 0;
    }
    else {
      if (*(undefined4 **)(iVar1 + 0x40) == (undefined4 *)0x0) {
        _Src = (void *)0x0;
      }
      else {
        _Src = (void *)**(undefined4 **)(iVar1 + 0x40);
      }
      memcpy(_Dst,_Src,uVar5 * 2 + 2);
    }
    piVar2 = (int *)(iVar1 + 0x24);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
    uVar4 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


