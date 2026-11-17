/* FUN_00885180 - 0x00885180 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00885180(void)

{
  void *pvVar1;
  char *pcVar2;
  int local_c;
  int local_8;
  
  if (DAT_00982258 == 0) {
    FUN_00882f32();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_009807b8,0x104);
  _DAT_009806d8 = &DAT_009807b8;
  pcVar2 = &DAT_009807b8;
  if (*DAT_00982250 != '\0') {
    pcVar2 = DAT_00982250;
  }
  FUN_00885219(pcVar2,0,0,&local_8,&local_c);
  pvVar1 = _malloc(local_c + local_8 * 4);
  if (pvVar1 == (void *)0x0) {
    __amsg_exit(8);
  }
  FUN_00885219(pcVar2,pvVar1,(void *)((int)pvVar1 + local_8 * 4),&local_8,&local_c);
  _DAT_009806c0 = pvVar1;
  _DAT_009806bc = local_8 + -1;
  return;
}


