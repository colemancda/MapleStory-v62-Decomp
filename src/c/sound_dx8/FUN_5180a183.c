/* FUN_5180a183 - 0x5180a183 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180a183(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_5180ea30();
  piVar1 = *(int **)(unaff_EBP + 8);
  puVar2 = (undefined4 *)piVar1[6];
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + 8) = puVar2;
  FUN_518017b5();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(piVar1 + 0xf),(IBinding *)0x0);
  uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  piVar1[0x14] = 0;
  (**(code **)(*piVar1 + 0x4c))(uVar3);
  piVar1 = puVar2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *puVar2 = 0;
  }
  FUN_5180a1e4();
  return;
}


