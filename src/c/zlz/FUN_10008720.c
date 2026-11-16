/* FUN_10008720 - 0x10008720 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


uint __thiscall FUN_10008720(void *this,uint param_1,int *param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  
  piVar1 = param_2;
  puVar2 = (uint *)(*param_2 + param_1);
  FUN_10008790(this,&param_1,puVar2,1);
  FUN_10008790(this,(uint *)&param_2,(uint *)((int)puVar2 + 1),1);
  FUN_10008790(this,param_3,(uint *)((int)puVar2 + 2),(uint)param_2 & 0xff);
  *piVar1 = *piVar1 + ((uint)param_2 & 0xff) + 2;
  return param_1 & 0xff;
}


