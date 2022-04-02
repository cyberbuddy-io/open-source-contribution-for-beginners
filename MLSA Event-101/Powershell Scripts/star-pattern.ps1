Clear-Host  #to clear the screen before executing the program

$shape = "*"

for ($i = 0; $i -lt 8; $i++) {
    for ($j = 0; $j -lt $i; $j++) {
        Write-Host -NoNewline $shape
    }
    Write-Host ""
}
for ($i = 8; $i -gt 0; $i--) {
    for ($j = 0; $j -lt $i; $j++) {
        Write-Host -NoNewline $shape
    }
    Write-Host ""
}