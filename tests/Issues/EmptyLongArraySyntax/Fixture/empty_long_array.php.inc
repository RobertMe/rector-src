<?php

declare(strict_types=1);

namespace Rector\Core\Tests\Issues\EmptyLongArraySyntax\Fixture;

use Rector\Core\Tests\Issues\EmptyLongArraySyntax\Source\ParentWithEmptyLongArray;

final class EmptyLongArray extends ParentWithEmptyLongArray
{
    public function run()
    {
    }
}

?>
-----
<?php

declare(strict_types=1);

namespace Rector\Core\Tests\Issues\EmptyLongArraySyntax\Fixture;

use Rector\Core\Tests\Issues\EmptyLongArraySyntax\Source\ParentWithEmptyLongArray;

final class EmptyLongArray extends ParentWithEmptyLongArray
{
    public function run($default = array())
    {
    }
}

?>
