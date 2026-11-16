/* FUN_5180df4c - 0x5180df4c in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180df4c(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  FUN_5180ea30();
  piVar1 = *(int **)(unaff_EBP + 8);
  puVar2 = (undefined4 *)piVar1[6];
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + 8) = puVar2;
  FUN_518017b5();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(piVar1 + 0xc),(IBinding *)0x0);
  (**(code **)(*piVar1 + 0x44))();
  piVar1 = puVar2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *puVar2 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


