/* FUN_5180a1f5 - 0x5180a1f5 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180a1f5(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_5180ea30();
  piVar1 = *(int **)(unaff_EBP + 8);
  puVar2 = (undefined4 *)piVar1[6];
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + 8) = puVar2;
  FUN_518017b5();
  iVar3 = piVar1[0xb];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (((iVar3 == 0) && (*(int *)(unaff_EBP + 0xc) != 0)) && (*(int *)(unaff_EBP + 0x10) != 0)) {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(piVar1 + 0xf),(IBinding *)0x0);
    piVar1[0x14] = *(int *)(unaff_EBP + 0xc);
    piVar1[0x15] = *(int *)(unaff_EBP + 0x10);
  }
  else {
    (**(code **)(*piVar1 + 0x50))
              (*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
  }
  piVar1 = puVar2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *puVar2 = 0;
  }
  FUN_5180a273();
  return;
}


