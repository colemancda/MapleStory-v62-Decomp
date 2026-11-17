/* FUN_004a094b - 0x004a094b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004a094b(void)

{
  int *piVar1;
  int extraout_ECX;
  void *unaff_retaddr;
  
  FUN_00879bb8();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x14),
             (IBinding *)0x0);
  piVar1 = *(int **)(extraout_ECX + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = unaff_retaddr;
  return;
}


