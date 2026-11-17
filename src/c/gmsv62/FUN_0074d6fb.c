/* FUN_0074d6fb - 0x0074d6fb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0074d6fb(undefined4 *param_1)

{
  int iVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 4),(IBinding *)0x0);
  param_1[7] = 0;
  iVar1 = 0x20;
  do {
    param_1[9] = 0;
    param_1[8] = 0;
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 8;
  } while (iVar1 != 0);
  return;
}


