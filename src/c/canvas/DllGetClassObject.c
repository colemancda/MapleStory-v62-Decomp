/* DllGetClassObject - 0x50002976 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x2976  2  DllGetClassObject */
  piVar2 = (int *)&DAT_50015794;
  iVar1 = wcscmp((wchar_t *)rclsid,u_Canvas_500182f4);
  if (iVar1 == 0) {
    piVar2 = (int *)&DAT_500182c8;
  }
  else {
    iVar1 = wcscmp((wchar_t *)rclsid,u_Font_500182e8);
    if (iVar1 == 0) {
      piVar2 = (int *)&DAT_500182b8;
    }
  }
  piVar2 = FUN_50004341((int *)&DAT_5001da40,piVar2,riid,(int *)ppv);
  return (HRESULT)piVar2;
}


