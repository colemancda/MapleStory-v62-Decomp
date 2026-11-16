/* FUN_5180b9d6 - 0x5180b9d6 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180b9d6(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar2 = piVar1[6];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  FUN_518017b5();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(piVar1 + 0xc),(IBinding *)0x0);
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  (**(code **)(iVar2 + 0x44))();
  FUN_5180ba28();
  return;
}


