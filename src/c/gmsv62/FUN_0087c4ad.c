/* FUN_0087c4ad - 0x0087c4ad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


char * FUN_0087c4ad(char *param_1)

{
  char cVar1;
  size_t _Size;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  void *local_c;
  
  local_c = (void *)0x0;
  if (DAT_0098079c == 0) {
    cVar1 = *param_1;
    pcVar3 = param_1;
    while (cVar1 != '\0') {
      cVar1 = *pcVar3;
      if (('`' < cVar1) && (cVar1 < '{')) {
        *pcVar3 = cVar1 + -0x20;
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
  }
  else {
    InterlockedIncrement(&DAT_00982008);
    bVar4 = DAT_00982004 == 0;
    if (!bVar4) {
      InterlockedDecrement(&DAT_00982008);
      FUN_0087d9ec(0x13);
    }
    if (DAT_0098079c == 0) {
      if (bVar4) {
        InterlockedDecrement(&DAT_00982008);
      }
      else {
        FUN_0087da4d(0x13);
      }
      cVar1 = *param_1;
      pcVar3 = param_1;
      while (cVar1 != '\0') {
        cVar1 = *pcVar3;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *pcVar3 = cVar1 + -0x20;
        }
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
    }
    else {
      _Size = FUN_0088304e(DAT_0098079c,0x200,param_1,0xffffffff,0,0,0,1);
      if (((_Size != 0) && (local_c = _malloc(_Size), local_c != (void *)0x0)) &&
         (iVar2 = FUN_0088304e(DAT_0098079c,0x200,param_1,0xffffffff,local_c,_Size,0,1), iVar2 != 0)
         ) {
        FUN_0087b200(param_1,local_c);
      }
      if (bVar4) {
        InterlockedDecrement(&DAT_00982008);
      }
      else {
        FUN_0087da4d(0x13);
      }
      FUN_0087aa78(local_c);
    }
  }
  return param_1;
}


