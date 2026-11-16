/* ptr_51812303 - 0x51812303 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 ptr_51812303(int param_1,void *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 == (void *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    iVar2 = memcmp(param_2,L"Output",0xe);
    if (iVar2 == 0) {
      piVar3 = (int *)(-(uint)(param_1 != 0) & param_1 + 4U);
      *param_3 = piVar3;
      (**(code **)(*piVar3 + 4))(piVar3);
      uVar1 = 0;
    }
    else {
      uVar1 = 0x80040216;
    }
  }
  return uVar1;
}


