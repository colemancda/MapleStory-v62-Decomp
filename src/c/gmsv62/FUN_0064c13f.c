/* FUN_0064c13f - 0x0064c13f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0064c13f(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  int local_44;
  undefined1 local_40 [60];
  
  iVar1 = FUN_006509a1(param_2);
  iVar1 = FUN_00413367(iVar1 + 0x13c,*(undefined4 *)(iVar1 + 0x144));
  iVar2 = 0;
  if (-1 < iVar1) {
    piVar3 = &local_44;
    do {
      *piVar3 = iVar2;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 <= iVar1);
  }
  if (1 < param_3) {
    puVar4 = local_40;
    piVar3 = (int *)(param_4 + 0xb0);
    iVar2 = param_3 + -1;
    do {
      FUN_004459fe(puVar4,local_40 + (*piVar3 % iVar1) * 4);
      piVar3 = piVar3 + 0x26;
      puVar4 = puVar4 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (0 < param_3) {
    piVar3 = &local_44;
    do {
      FUN_00402f41(*(int *)(param_1 + 0x60) + *piVar3 * 4);
      piVar3 = piVar3 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


