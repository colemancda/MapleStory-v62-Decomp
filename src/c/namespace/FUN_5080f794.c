/* FUN_5080f794 - 0x5080f794 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * FUN_5080f794(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_50818b74;
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = &PTR_LAB_50818a5c;
  uVar4 = -(uint)(iVar1 != 0) & iVar1 + 4U;
  extraout_ECX[2] = *(undefined4 *)(uVar4 + 4);
  uVar2 = *(undefined4 *)(uVar4 + 8);
  extraout_ECX[1] = &PTR_FUN_50818b50;
  extraout_ECX[3] = uVar2;
  extraout_ECX[4] = *(undefined4 *)(uVar4 + 0xc);
  extraout_ECX[1] = &PTR_FUN_50818b2c;
  uVar4 = -(uint)(iVar1 != 0) & iVar1 + 0x14U;
  *(undefined1 *)(extraout_ECX + 6) = *(undefined1 *)(-(uint)(uVar4 != 0) & uVar4 + 4);
  extraout_ECX[6] = &PTR_purecall_508172ac;
  extraout_ECX[5] = &PTR_FUN_50818b28;
  extraout_ECX[6] = &PTR_purecall_50818b24;
  piVar3 = *(int **)(iVar1 + 0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[7] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  piVar3 = *(int **)(iVar1 + 0x20);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[8] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_50818af0;
  extraout_ECX[1] = &PTR_ptr_5080d4f8_50818acc;
  extraout_ECX[5] = &PTR_ptr_5080d520_50818ac8;
  extraout_ECX[6] = &PTR_FUN_50818ac4;
  return extraout_ECX;
}


