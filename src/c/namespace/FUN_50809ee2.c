/* FUN_50809ee2 - 0x50809ee2 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined1 __thiscall FUN_50809ee2(void *this,int param_1,int *param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  
  piVar1 = param_2;
  puVar2 = (uint *)(*param_2 + param_1);
  FUN_50809f35(this,(uint *)((int)&param_1 + 3),puVar2,1);
  FUN_50809f35(this,(uint *)((int)&param_2 + 3),(uint *)((int)puVar2 + 1),1);
  FUN_50809f35(this,param_3,(uint *)((int)puVar2 + 2),(uint)param_2 >> 0x18);
  *piVar1 = *piVar1 + ((uint)param_2 >> 0x18) + 2;
  return param_1._3_1_;
}


